import requests
import re
import os
import json
import time

# ── Config ──────────────────────────────────────────────────────────────────
USERNAME = os.environ.get("LEETCODE_USERNAME", "your_leetcode_username")

HEADERS = {
    "Content-Type": "application/json",
    "Referer": "https://leetcode.com",
    "User-Agent": "Mozilla/5.0 (compatible; LeetCode-Stats-Bot/1.0)",
}

DIFFICULTY_EMOJI = {"Easy": "🟢", "Medium": "🟡", "Hard": "🔴"}

# Topic tags → folder mapping (extend as needed)
TOPIC_FOLDER_MAP = {
    "array":                   "Arrays-Hashing",
    "hash-table":              "Arrays-Hashing",
    "two-pointers":            "Two-Pointers",
    "sliding-window":          "Sliding-Window",
    "stack":                   "Stack",
    "binary-search":           "Binary-Search",
    "linked-list":             "Linked-List",
    "tree":                    "Trees",
    "binary-tree":             "Trees",
    "trie":                    "Tries",
    "heap-priority-queue":     "Heap",
    "backtracking":            "Backtracking",
    "graph":                   "Graphs",
    "dynamic-programming":     "Dynamic-Programming",
    "greedy":                  "Greedy",
    "bit-manipulation":        "Bit-Manipulation",
    "math":                    "Math-Geometry",
    "geometry":                "Math-Geometry",
}

# ── GraphQL Queries ──────────────────────────────────────────────────────────

STATS_QUERY = """
query getUserStats($username: String!) {
  matchedUser(username: $username) {
    submitStatsGlobal {
      acSubmissionNum {
        difficulty
        count
      }
    }
  }
}
"""

SOLVED_PROBLEMS_QUERY = """
query recentAcSubmissions($username: String!, $limit: Int!) {
  recentAcSubmissionList(username: $username, limit: $limit) {
    id
    title
    titleSlug
    timestamp
  }
}
"""

PROBLEM_DETAIL_QUERY = """
query getProblemDetail($titleSlug: String!) {
  question(titleSlug: $titleSlug) {
    questionFrontendId
    title
    titleSlug
    difficulty
    topicTags {
      slug
    }
  }
}
"""

ALL_SOLVED_QUERY = """
query userSolvedProblems($username: String!) {
  matchedUser(username: $username) {
    problemsSolvedBeatsStats {
      difficulty
      percentage
    }
    submitStatsGlobal {
      acSubmissionNum {
        difficulty
        count
      }
    }
    profile {
      ranking
    }
  }
  recentAcSubmissionList(username: $username, limit: 50) {
    id
    title
    titleSlug
    timestamp
  }
}
"""

# ── API helpers ──────────────────────────────────────────────────────────────

def gql(query: str, variables: dict = None) -> dict:
    """Run a GraphQL query against LeetCode."""
    payload = {"query": query}
    if variables:
        payload["variables"] = variables

    for attempt in range(3):
        try:
            resp = requests.post(
                "https://leetcode.com/graphql",
                json=payload,
                headers=HEADERS,
                timeout=15,
            )
            resp.raise_for_status()
            data = resp.json()
            if "errors" in data:
                raise ValueError(f"GraphQL errors: {data['errors']}")
            return data["data"]
        except Exception as e:
            print(f"  Attempt {attempt + 1} failed: {e}")
            if attempt < 2:
                time.sleep(3)
    raise RuntimeError("All GraphQL attempts failed.")


# ── Fetchers ─────────────────────────────────────────────────────────────────

def fetch_stats() -> dict:
    """Return {Easy: n, Medium: n, Hard: n, All: n}."""
    print("Fetching stats...")
    data = gql(STATS_QUERY, {"username": USERNAME})
    nums = data["matchedUser"]["submitStatsGlobal"]["acSubmissionNum"]
    stats = {item["difficulty"]: item["count"] for item in nums}
    return stats


def fetch_recent_problems(limit: int = 50) -> list[dict]:
    """Return list of recently accepted submissions."""
    print(f"Fetching last {limit} solved problems...")
    data = gql(SOLVED_PROBLEMS_QUERY, {"username": USERNAME, "limit": limit})
    return data.get("recentAcSubmissionList", [])


def fetch_problem_detail(title_slug: str) -> dict | None:
    """Return problem metadata for a given slug."""
    time.sleep(0.4)  # be polite to the API
    try:
        data = gql(PROBLEM_DETAIL_QUERY, {"titleSlug": title_slug})
        return data.get("question")
    except Exception as e:
        print(f"  Could not fetch detail for {title_slug}: {e}")
        return None


# ── Helpers ──────────────────────────────────────────────────────────────────

def infer_folder(topic_tags: list[str]) -> str:
    """Map topic tags to the repo folder name."""
    for tag in topic_tags:
        if tag in TOPIC_FOLDER_MAP:
            return TOPIC_FOLDER_MAP[tag]
    return "Other"


def pad_problem_id(pid: str) -> str:
    """Zero-pad problem ID to 4 digits."""
    return pid.zfill(4)


def slug_to_folder_name(pid: str, slug: str) -> str:
    """e.g. '0001-two-sum'"""
    return f"{pad_problem_id(pid)}-{slug}"


def lc_url(title_slug: str) -> str:
    return f"https://leetcode.com/problems/{title_slug}/"


# ── README update functions ──────────────────────────────────────────────────

def update_stats_block(content: str, stats: dict) -> str:
    """Replace the content between STATS_START and STATS_END markers."""
    easy   = stats.get("Easy",   0)
    medium = stats.get("Medium", 0)
    hard   = stats.get("Hard",   0)
    total  = stats.get("All",    easy + medium + hard)

    new_block = (
        f"| 🟢 Easy    | {easy}     | 800+   |\n"
        f"| 🟡 Medium  | {medium}   | 1600+  |\n"
        f"| 🔴 Hard    | {hard}     | 700+   |\n"
        f"| **Total**  | **{total}** | **3100+** |"
    )

    updated = re.sub(
        r"(<!-- STATS_START -->).*?(<!-- STATS_END -->)",
        f"<!-- STATS_START -->\n{new_block}\n<!-- STATS_END -->",
        content,
        flags=re.DOTALL,
    )
    print(f"  Stats updated → Easy={easy}, Medium={medium}, Hard={hard}, Total={total}")
    return updated


def build_index_row(problem: dict) -> str:
    """Build one markdown table row for a problem."""
    pid        = pad_problem_id(problem["questionFrontendId"])
    title      = problem["title"]
    slug       = problem["titleSlug"]
    difficulty = problem["difficulty"]
    emoji      = DIFFICULTY_EMOJI.get(difficulty, "⚪")
    tags       = [t["slug"] for t in problem.get("topicTags", [])]
    folder     = infer_folder(tags)
    folder_name = slug_to_folder_name(problem["questionFrontendId"], slug)

    # Friendly topic label (first 2 tags, title-cased)
    topic_display = ", ".join(
        t.replace("-", " ").title() for t in tags[:2]
    ) or "—"

    return (
        f"| {pid} "
        f"| [{title}]({lc_url(slug)}) "
        f"| {emoji} {difficulty} "
        f"| {topic_display} "
        f"| [✔️](./{folder}/{folder_name}/) |"
    )


def update_index_block(content: str, problems: list[dict]) -> str:
    """Replace content between INDEX_START and INDEX_END markers."""
    if not problems:
        print("  No problems to index.")
        return content

    # Sort by problem ID ascending
    sorted_problems = sorted(
        problems, key=lambda p: int(p.get("questionFrontendId", 0))
    )

    header = (
        "| # | Problem | Difficulty | Topics | Solution |\n"
        "|---|---------|------------|--------|----------|"
    )
    rows = [build_index_row(p) for p in sorted_problems]
    table = header + "\n" + "\n".join(rows)

    updated = re.sub(
        r"(<!-- INDEX_START -->).*?(<!-- INDEX_END -->)",
        f"<!-- INDEX_START -->\n{table}\n<!-- INDEX_END -->",
        content,
        flags=re.DOTALL,
    )
    print(f"  Index updated → {len(rows)} problems listed.")
    return updated


# ── Topics block ─────────────────────────────────────────────────────────────

def update_topics_block(content: str, problems: list[dict]) -> str:
    """Update the per-topic count table between TOPICS_START and TOPICS_END."""
    if not problems:
        return content

    # Count by folder
    counts: dict[str, int] = {}
    for p in problems:
        tags   = [t["slug"] for t in p.get("topicTags", [])]
        folder = infer_folder(tags)
        counts[folder] = counts.get(folder, 0) + 1

    # Ordered list (matches README section order)
    folder_order = [
        "Arrays-Hashing", "Two-Pointers", "Sliding-Window", "Stack",
        "Binary-Search", "Linked-List", "Trees", "Tries", "Heap",
        "Backtracking", "Graphs", "Dynamic-Programming", "Greedy",
        "Bit-Manipulation", "Math-Geometry", "Other",
    ]

    rows = []
    for i, folder in enumerate(folder_order, 1):
        count = counts.get(folder, 0)
        rows.append(
            f"| {i:02d} | [{folder.replace('-', ' ')}](./{folder}/) | {count} |"
        )

    header = "| # | Topic | Problems Solved |\n|---|-------|-----------------|\n"
    table  = header + "\n".join(rows)

    updated = re.sub(
        r"(<!-- TOPICS_START -->).*?(<!-- TOPICS_END -->)",
        f"<!-- TOPICS_START -->\n{table}\n<!-- TOPICS_END -->",
        content,
        flags=re.DOTALL,
    )
    print(f"  Topics table updated.")
    return updated


# ── Main ─────────────────────────────────────────────────────────────────────

def main():
    print(f"\n🚀 Starting LeetCode README sync for: {USERNAME}\n")

    # 1. Fetch overall stats
    stats = fetch_stats()

    # 2. Fetch recently solved (up to 50 via API; increase limit if needed)
    recent = fetch_recent_problems(limit=50)

    # 3. Enrich each with full problem details (difficulty, tags, id)
    enriched = []
    seen_slugs = set()
    for sub in recent:
        slug = sub["titleSlug"]
        if slug in seen_slugs:
            continue
        seen_slugs.add(slug)
        detail = fetch_problem_detail(slug)
        if detail and detail.get("questionFrontendId"):
            enriched.append(detail)

    print(f"\n  Enriched {len(enriched)} unique problems.\n")

    # 4. Read README
    readme_path = "README.md"
    with open(readme_path, "r", encoding="utf-8") as f:
        content = f.read()

    # 5. Apply updates
    content = update_stats_block(content, stats)
    content = update_topics_block(content, enriched)
    content = update_index_block(content, enriched)

    # 6. Write back
    with open(readme_path, "w", encoding="utf-8") as f:
        f.write(content)

    print("\n✅ README.md updated successfully!\n")


if __name__ == "__main__":
    main()

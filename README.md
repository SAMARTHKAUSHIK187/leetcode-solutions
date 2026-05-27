<div align="center">

# 🧩 LeetCode Solutions

![LeetCode](https://img.shields.io/badge/LeetCode-Solutions-FFA116?style=for-the-badge&logo=leetcode&logoColor=white)
![Language](https://img.shields.io/badge/Language-Python-3776AB?style=for-the-badge&logo=python&logoColor=white)
![Auto-Sync](https://img.shields.io/badge/Stats-Auto--Synced-brightgreen?style=for-the-badge&logo=githubactions&logoColor=white)
![License](https://img.shields.io/badge/License-MIT-blue?style=for-the-badge)

*A structured collection of LeetCode problem solutions with explanations, complexity analysis, and multiple approaches.*

<!-- Replace YOUR_USERNAME with your LeetCode username -->
![LeetCode Stats](https://leetcard.jacoblin.cool/kaushik_samarth?theme=dark&font=Nunito&ext=contest)

</div>

---

## 📌 Table of Contents

- [About](#-about)
- [Progress Tracker](#-progress-tracker)
- [Topics Covered](#-topics-covered)
- [Repository Structure](#-repository-structure)
- [How to Use](#-how-to-use)
- [Problem Index](#-problem-index)
- [Contributing](#-contributing)

---

## 🔍 About

This repository contains my personal solutions to LeetCode problems, organized by topic and difficulty. Each solution includes:

- ✅ Clean, well-commented code
- 📊 Time & Space complexity analysis
- 💡 Approach explanation
- 🔁 Alternative solutions where applicable

> **Goal:** Solve 500+ problems covering all core DSA topics.
>
> 🤖 *Stats and problem index are auto-synced daily via GitHub Actions.*

---

## 📈 Progress Tracker

| Difficulty | Solved | Total |
| :--- | :---: | :---: |
| 🟢 Easy | 50 | 800+ |
| 🟡 Medium | 32 | 1600+ |
| 🔴 Hard | 1 | 700+ |
| **Total** | **83** | **3100+** |
---

## 🗂️ Topics Covered

<!-- TOPICS_START -->
| # | Topic | Problems Solved |
|---|-------|-----------------|
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 17 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 1 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 1 |
| 07 | [Trees](./Trees/) | 0 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 0 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 0 |
| 16 | [Other](./Other/) | 0 |
<!-- TOPICS_END -->

---

## 📁 Repository Structure

```
leetcode-solutions/
│
├── .github/
│   └── workflows/
│       └── update-leetcode.yml   ← GitHub Actions (auto-sync)
│
├── scripts/
│   └── update_stats.py           ← Sync script
│
├── Arrays-Hashing/
│   ├── 0001-two-sum/
│   │   ├── solution.py
│   │   └── README.md
│   └── 0049-group-anagrams/
│       ├── solution.py
│       └── README.md
│
├── Two-Pointers/
│   └── ...
│
├── Dynamic-Programming/
│   └── ...
│
└── README.md
```

Each problem folder follows this convention:

```
0001-two-sum/
├── solution.py       # Primary solution
├── solution2.py      # Alternate approach (if applicable)
└── README.md         # Problem statement + explanation
```

---

## 🚀 How to Use

**Clone the repository:**
```bash
git clone https://github.com/YOUR_GITHUB_USERNAME/leetcode-solutions.git
cd leetcode-solutions
```

**Navigate to a topic:**
```bash
cd Dynamic-Programming/
ls
```

**Run a solution:**
```bash
python 0322-coin-change/solution.py
```

**Run the sync script locally** (needs `LEETCODE_USERNAME` env var):
```bash
pip install requests
LEETCODE_USERNAME=your_username python scripts/update_stats.py
```

---

## 📋 Problem Index

> Auto-updated daily via GitHub Actions. Showing last 50 solved problems.

<!-- INDEX_START -->
| # | Problem | Difficulty | Topics | Solution |
|---|---------|------------|--------|----------|
| 0020 | [Valid Parentheses](https://leetcode.com/problems/valid-parentheses/) | 🟢 Easy | String, Stack | [✔️](./Stack/0020-valid-parentheses/) |
| 0033 | [Search in Rotated Sorted Array](https://leetcode.com/problems/search-in-rotated-sorted-array/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/0033-search-in-rotated-sorted-array/) |
| 0039 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0039-combination-sum/) |
| 0040 | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0040-combination-sum-ii/) |
| 0046 | [Permutations](https://leetcode.com/problems/permutations/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0046-permutations/) |
| 0090 | [Subsets II](https://leetcode.com/problems/subsets-ii/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0090-subsets-ii/) |
| 0153 | [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/0153-find-minimum-in-rotated-sorted-array/) |
| 0154 | [Find Minimum in Rotated Sorted Array II](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array-ii/) | 🔴 Hard | Array, Binary Search | [✔️](./Arrays-Hashing/0154-find-minimum-in-rotated-sorted-array-ii/) |
| 0216 | [Combination Sum III](https://leetcode.com/problems/combination-sum-iii/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0216-combination-sum-iii/) |
| 0496 | [Next Greater Element I](https://leetcode.com/problems/next-greater-element-i/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/0496-next-greater-element-i/) |
| 1306 | [Jump Game III](https://leetcode.com/problems/jump-game-iii/) | 🟡 Medium | Array, Depth First Search | [✔️](./Arrays-Hashing/1306-jump-game-iii/) |
| 1752 | [Check if Array Is Sorted and Rotated](https://leetcode.com/problems/check-if-array-is-sorted-and-rotated/) | 🟢 Easy | Array | [✔️](./Arrays-Hashing/1752-check-if-array-is-sorted-and-rotated/) |
| 2540 | [Minimum Common Value](https://leetcode.com/problems/minimum-common-value/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/2540-minimum-common-value/) |
| 2657 | [Find the Prefix Common Array of Two Arrays](https://leetcode.com/problems/find-the-prefix-common-array-of-two-arrays/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/2657-find-the-prefix-common-array-of-two-arrays/) |
| 2784 | [Check if Array is Good](https://leetcode.com/problems/check-if-array-is-good/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/2784-check-if-array-is-good/) |
| 2816 | [Double a Number Represented as a Linked List](https://leetcode.com/problems/double-a-number-represented-as-a-linked-list/) | 🟡 Medium | Linked List, Math | [✔️](./Linked-List/2816-double-a-number-represented-as-a-linked-list/) |
| 2869 | [Minimum Operations to Collect Elements](https://leetcode.com/problems/minimum-operations-to-collect-elements/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/2869-minimum-operations-to-collect-elements/) |
| 3120 | [Count the Number of Special Characters I](https://leetcode.com/problems/count-the-number-of-special-characters-i/) | 🟢 Easy | Hash Table, String | [✔️](./Arrays-Hashing/3120-count-the-number-of-special-characters-i/) |
| 3121 | [Count the Number of Special Characters II](https://leetcode.com/problems/count-the-number-of-special-characters-ii/) | 🟡 Medium | Hash Table, String | [✔️](./Arrays-Hashing/3121-count-the-number-of-special-characters-ii/) |
<!-- INDEX_END -->

---

## 🤖 Auto-Sync Setup

This repo uses GitHub Actions to automatically update stats and the problem index every day. Here's how it works:

```
Schedule (peridically as determined in the yml file)
        ↓
Fetch LeetCode GraphQL API
        ↓
Update README markers
        ↓
git commit & push
```

To set it up in your fork:
1. Go to **Settings → Secrets → Actions**
2. Add secret: `LEETCODE_USERNAME` = your LeetCode handle
3. The workflow in `.github/workflows/update-leetcode.yml` does the rest

---

## 🤝 Contributing

This is a personal learning repo, but suggestions are welcome!

1. Fork the repository
2. Create a new branch (`git checkout -b fix/problem-123`)
3. Commit your changes (`git commit -m 'Add alternate solution for #123'`)
4. Push and open a Pull Request

---


---

<div align="center">

⭐ **Star this repo if you find it helpful!** ⭐

*Stats auto-synced · Last updated by GitHub Actions*

</div>

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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 5 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 0 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 2 |
| 07 | [Trees](./Trees/) | 6 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 1 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 0 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 1 |
| 16 | [Other](./Other/) | 5 |
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
| 0101 | [Symmetric Tree](https://leetcode.com/problems/symmetric-tree/) | 🟢 Easy | Tree, Depth First Search | [✔️](./Trees/0101-symmetric-tree/) |
| 0103 | [Binary Tree Zigzag Level Order Traversal](https://leetcode.com/problems/binary-tree-zigzag-level-order-traversal/) | 🟡 Medium | Tree, Breadth First Search | [✔️](./Trees/0103-binary-tree-zigzag-level-order-traversal/) |
| 0105 | [Construct Binary Tree from Preorder and Inorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-preorder-and-inorder-traversal/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/0105-construct-binary-tree-from-preorder-and-inorder-traversal/) |
| 0106 | [Construct Binary Tree from Inorder and Postorder Traversal](https://leetcode.com/problems/construct-binary-tree-from-inorder-and-postorder-traversal/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/0106-construct-binary-tree-from-inorder-and-postorder-traversal/) |
| 0199 | [Binary Tree Right Side View](https://leetcode.com/problems/binary-tree-right-side-view/) | 🟡 Medium | Tree, Depth First Search | [✔️](./Trees/0199-binary-tree-right-side-view/) |
| 0236 | [Lowest Common Ancestor of a Binary Tree](https://leetcode.com/problems/lowest-common-ancestor-of-a-binary-tree/) | 🟡 Medium | Tree, Depth First Search | [✔️](./Trees/0236-lowest-common-ancestor-of-a-binary-tree/) |
| 0257 | [Binary Tree Paths](https://leetcode.com/problems/binary-tree-paths/) | 🟢 Easy | String, Backtracking | [✔️](./Backtracking/0257-binary-tree-paths/) |
| 0662 | [Maximum Width of Binary Tree](https://leetcode.com/problems/maximum-width-of-binary-tree/) | 🟡 Medium | Tree, Depth First Search | [✔️](./Trees/0662-maximum-width-of-binary-tree/) |
| 0700 | [Search in a Binary Search Tree](https://leetcode.com/problems/search-in-a-binary-search-tree/) | 🟢 Easy | Tree, Binary Search Tree | [✔️](./Trees/0700-search-in-a-binary-search-tree/) |
| 0987 | [Vertical Order Traversal of a Binary Tree](https://leetcode.com/problems/vertical-order-traversal-of-a-binary-tree/) | 🔴 Hard | Hash Table, Tree | [✔️](./Arrays-Hashing/0987-vertical-order-traversal-of-a-binary-tree/) |
| 1344 | [Angle Between Hands of a Clock](https://leetcode.com/problems/angle-between-hands-of-a-clock/) | 🟡 Medium | Math | [✔️](./Math-Geometry/1344-angle-between-hands-of-a-clock/) |
| 2095 | [Delete the Middle Node of a Linked List](https://leetcode.com/problems/delete-the-middle-node-of-a-linked-list/) | 🟡 Medium | Linked List, Two Pointers | [✔️](./Linked-List/2095-delete-the-middle-node-of-a-linked-list/) |
| 2130 | [Maximum Twin Sum of a Linked List](https://leetcode.com/problems/maximum-twin-sum-of-a-linked-list/) | 🟡 Medium | Linked List, Two Pointers | [✔️](./Linked-List/2130-maximum-twin-sum-of-a-linked-list/) |
| 2385 | [Amount of Time for Binary Tree to Be Infected](https://leetcode.com/problems/amount-of-time-for-binary-tree-to-be-infected/) | 🟡 Medium | Hash Table, Tree | [✔️](./Arrays-Hashing/2385-amount-of-time-for-binary-tree-to-be-infected/) |
| 3612 | [Process String with Special Operations I](https://leetcode.com/problems/process-string-with-special-operations-i/) | 🟡 Medium | String, Simulation | [✔️](./Other/3612-process-string-with-special-operations-i/) |
| 3614 | [Process String with Special Operations II](https://leetcode.com/problems/process-string-with-special-operations-ii/) | 🔴 Hard | String, Simulation | [✔️](./Other/3614-process-string-with-special-operations-ii/) |
| 3838 | [Weighted Word Mapping](https://leetcode.com/problems/weighted-word-mapping/) | 🟢 Easy | Array, String | [✔️](./Arrays-Hashing/3838-weighted-word-mapping/) |
| 3959 | [Check Good Integer](https://leetcode.com/problems/check-good-integer/) | 🟢 Easy | — | [✔️](./Other/3959-check-good-integer/) |
| 3960 | [Frequency Balance Subarray](https://leetcode.com/problems/frequency-balance-subarray/) | 🟡 Medium | — | [✔️](./Other/3960-frequency-balance-subarray/) |
| 3961 | [Maximize Sum of Device Ratings](https://leetcode.com/problems/maximize-sum-of-device-ratings/) | 🟡 Medium | — | [✔️](./Other/3961-maximize-sum-of-device-ratings/) |
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

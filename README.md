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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 10 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 3 |
| 05 | [Binary Search](./Binary-Search/) | 1 |
| 06 | [Linked List](./Linked-List/) | 0 |
| 07 | [Trees](./Trees/) | 1 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 0 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 0 |
| 16 | [Other](./Other/) | 4 |
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
| 0003 | [Longest Substring Without Repeating Characters](https://leetcode.com/problems/longest-substring-without-repeating-characters/) | 🟡 Medium | Hash Table, String | [✔️](./Arrays-Hashing/0003-longest-substring-without-repeating-characters/) |
| 0042 | [Trapping Rain Water](https://leetcode.com/problems/trapping-rain-water/) | 🔴 Hard | Array, Two Pointers | [✔️](./Arrays-Hashing/0042-trapping-rain-water/) |
| 0076 | [Minimum Window Substring](https://leetcode.com/problems/minimum-window-substring/) | 🔴 Hard | Hash Table, String | [✔️](./Arrays-Hashing/0076-minimum-window-substring/) |
| 0094 | [Binary Tree Inorder Traversal](https://leetcode.com/problems/binary-tree-inorder-traversal/) | 🟢 Easy | Stack, Tree | [✔️](./Stack/0094-binary-tree-inorder-traversal/) |
| 0102 | [Binary Tree Level Order Traversal](https://leetcode.com/problems/binary-tree-level-order-traversal/) | 🟡 Medium | Tree, Breadth First Search | [✔️](./Trees/0102-binary-tree-level-order-traversal/) |
| 0144 | [Binary Tree Preorder Traversal](https://leetcode.com/problems/binary-tree-preorder-traversal/) | 🟢 Easy | Stack, Tree | [✔️](./Stack/0144-binary-tree-preorder-traversal/) |
| 0145 | [Binary Tree Postorder Traversal](https://leetcode.com/problems/binary-tree-postorder-traversal/) | 🟢 Easy | Stack, Tree | [✔️](./Stack/0145-binary-tree-postorder-traversal/) |
| 0424 | [Longest Repeating Character Replacement](https://leetcode.com/problems/longest-repeating-character-replacement/) | 🟡 Medium | Hash Table, String | [✔️](./Arrays-Hashing/0424-longest-repeating-character-replacement/) |
| 0904 | [Fruit Into Baskets](https://leetcode.com/problems/fruit-into-baskets/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/0904-fruit-into-baskets/) |
| 1004 | [Max Consecutive Ones III](https://leetcode.com/problems/max-consecutive-ones-iii/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/1004-max-consecutive-ones-iii/) |
| 2024 | [Maximize the Confusion of an Exam](https://leetcode.com/problems/maximize-the-confusion-of-an-exam/) | 🟡 Medium | String, Binary Search | [✔️](./Binary-Search/2024-maximize-the-confusion-of-an-exam/) |
| 2161 | [Partition Array According to Given Pivot](https://leetcode.com/problems/partition-array-according-to-given-pivot/) | 🟡 Medium | Array, Two Pointers | [✔️](./Arrays-Hashing/2161-partition-array-according-to-given-pivot/) |
| 2517 | [Maximum Tastiness of Candy Basket](https://leetcode.com/problems/maximum-tastiness-of-candy-basket/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/2517-maximum-tastiness-of-candy-basket/) |
| 2574 | [Left and Right Sum Differences](https://leetcode.com/problems/left-and-right-sum-differences/) | 🟢 Easy | Array, Prefix Sum | [✔️](./Arrays-Hashing/2574-left-and-right-sum-differences/) |
| 3689 | [Maximum Total Subarray Value I](https://leetcode.com/problems/maximum-total-subarray-value-i/) | 🟡 Medium | Array, Greedy | [✔️](./Arrays-Hashing/3689-maximum-total-subarray-value-i/) |
| 3950 | [Exactly One Consecutive Set Bits Pair](https://leetcode.com/problems/exactly-one-consecutive-set-bits-pair/) | 🟢 Easy | — | [✔️](./Other/3950-exactly-one-consecutive-set-bits-pair/) |
| 3952 | [Maximum Total Value of Covered Indices](https://leetcode.com/problems/maximum-total-value-of-covered-indices/) | 🟡 Medium | — | [✔️](./Other/3952-maximum-total-value-of-covered-indices/) |
| 3954 | [Sum of Compatible Numbers in Range I](https://leetcode.com/problems/sum-of-compatible-numbers-in-range-i/) | 🟢 Easy | — | [✔️](./Other/3954-sum-of-compatible-numbers-in-range-i/) |
| 3955 | [Valid Binary Strings With Cost Limit](https://leetcode.com/problems/valid-binary-strings-with-cost-limit/) | 🟡 Medium | — | [✔️](./Other/3955-valid-binary-strings-with-cost-limit/) |
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

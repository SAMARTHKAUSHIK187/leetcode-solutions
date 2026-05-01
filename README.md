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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 8 |
| 02 | [Two Pointers](./Two-Pointers/) | 1 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 2 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 0 |
| 07 | [Trees](./Trees/) | 0 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
| 11 | [Graphs](./Graphs/) | 0 |
| 12 | [Dynamic Programming](./Dynamic-Programming/) | 0 |
| 13 | [Greedy](./Greedy/) | 0 |
| 14 | [Bit Manipulation](./Bit-Manipulation/) | 0 |
| 15 | [Math Geometry](./Math-Geometry/) | 2 |
| 16 | [Other](./Other/) | 6 |
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
| 0034 | [Find First and Last Position of Element in Sorted Array](https://leetcode.com/problems/find-first-and-last-position-of-element-in-sorted-array/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/0034-find-first-and-last-position-of-element-in-sorted-array/) |
| 0121 | [Best Time to Buy and Sell Stock](https://leetcode.com/problems/best-time-to-buy-and-sell-stock/) | 🟢 Easy | Array, Dynamic Programming | [✔️](./Arrays-Hashing/0121-best-time-to-buy-and-sell-stock/) |
| 0151 | [Reverse Words in a String](https://leetcode.com/problems/reverse-words-in-a-string/) | 🟡 Medium | Two Pointers, String | [✔️](./Two-Pointers/0151-reverse-words-in-a-string/) |
| 0162 | [Find Peak Element](https://leetcode.com/problems/find-peak-element/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/0162-find-peak-element/) |
| 0205 | [Isomorphic Strings](https://leetcode.com/problems/isomorphic-strings/) | 🟢 Easy | Hash Table, String | [✔️](./Arrays-Hashing/0205-isomorphic-strings/) |
| 0451 | [Sort Characters By Frequency](https://leetcode.com/problems/sort-characters-by-frequency/) | 🟡 Medium | Hash Table, String | [✔️](./Arrays-Hashing/0451-sort-characters-by-frequency/) |
| 0796 | [Rotate String](https://leetcode.com/problems/rotate-string/) | 🟢 Easy | String, String Matching | [✔️](./Other/0796-rotate-string/) |
| 0877 | [Stone Game](https://leetcode.com/problems/stone-game/) | 🟡 Medium | Array, Math | [✔️](./Arrays-Hashing/0877-stone-game/) |
| 1021 | [Remove Outermost Parentheses](https://leetcode.com/problems/remove-outermost-parentheses/) | 🟢 Easy | String, Stack | [✔️](./Stack/1021-remove-outermost-parentheses/) |
| 1614 | [Maximum Nesting Depth of the Parentheses](https://leetcode.com/problems/maximum-nesting-depth-of-the-parentheses/) | 🟢 Easy | String, Stack | [✔️](./Stack/1614-maximum-nesting-depth-of-the-parentheses/) |
| 1903 | [Largest Odd Number in String](https://leetcode.com/problems/largest-odd-number-in-string/) | 🟢 Easy | Math, String | [✔️](./Math-Geometry/1903-largest-odd-number-in-string/) |
| 1922 | [Count Good Numbers](https://leetcode.com/problems/count-good-numbers/) | 🟡 Medium | Math, Recursion | [✔️](./Math-Geometry/1922-count-good-numbers/) |
| 2149 | [Rearrange Array Elements by Sign](https://leetcode.com/problems/rearrange-array-elements-by-sign/) | 🟡 Medium | Array, Two Pointers | [✔️](./Arrays-Hashing/2149-rearrange-array-elements-by-sign/) |
| 2615 | [Sum of Distances](https://leetcode.com/problems/sum-of-distances/) | 🟡 Medium | Array, Hash Table | [✔️](./Arrays-Hashing/2615-sum-of-distances/) |
| 2833 | [Furthest Point From Origin](https://leetcode.com/problems/furthest-point-from-origin/) | 🟢 Easy | String, Counting | [✔️](./Other/2833-furthest-point-from-origin/) |
| 3908 | [Valid Digit Number](https://leetcode.com/problems/valid-digit-number/) | 🟢 Easy | — | [✔️](./Other/3908-valid-digit-number/) |
| 3909 | [Compare Sums of Bitonic Parts](https://leetcode.com/problems/compare-sums-of-bitonic-parts/) | 🟡 Medium | — | [✔️](./Other/3909-compare-sums-of-bitonic-parts/) |
| 3912 | [Valid Elements in an Array](https://leetcode.com/problems/valid-elements-in-an-array/) | 🟢 Easy | — | [✔️](./Other/3912-valid-elements-in-an-array/) |
| 3914 | [Minimum Operations to Make Array Non Decreasing](https://leetcode.com/problems/minimum-operations-to-make-array-non-decreasing/) | 🟡 Medium | — | [✔️](./Other/3914-minimum-operations-to-make-array-non-decreasing/) |
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

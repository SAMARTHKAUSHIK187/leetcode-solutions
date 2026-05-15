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
| 01 | [Arrays Hashing](./Arrays-Hashing/) | 11 |
| 02 | [Two Pointers](./Two-Pointers/) | 0 |
| 03 | [Sliding Window](./Sliding-Window/) | 0 |
| 04 | [Stack](./Stack/) | 0 |
| 05 | [Binary Search](./Binary-Search/) | 0 |
| 06 | [Linked List](./Linked-List/) | 3 |
| 07 | [Trees](./Trees/) | 0 |
| 08 | [Tries](./Tries/) | 0 |
| 09 | [Heap](./Heap/) | 0 |
| 10 | [Backtracking](./Backtracking/) | 0 |
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
| 0002 | [Add Two Numbers](https://leetcode.com/problems/add-two-numbers/) | 🟡 Medium | Linked List, Math | [✔️](./Linked-List/0002-add-two-numbers/) |
| 0008 | [String to Integer (atoi)](https://leetcode.com/problems/string-to-integer-atoi/) | 🟡 Medium | String | [✔️](./Other/0008-string-to-integer-atoi/) |
| 0026 | [Remove Duplicates from Sorted Array](https://leetcode.com/problems/remove-duplicates-from-sorted-array/) | 🟢 Easy | Array, Two Pointers | [✔️](./Arrays-Hashing/0026-remove-duplicates-from-sorted-array/) |
| 0027 | [Remove Element](https://leetcode.com/problems/remove-element/) | 🟢 Easy | Array, Two Pointers | [✔️](./Arrays-Hashing/0027-remove-element/) |
| 0039 | [Combination Sum](https://leetcode.com/problems/combination-sum/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0039-combination-sum/) |
| 0040 | [Combination Sum II](https://leetcode.com/problems/combination-sum-ii/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0040-combination-sum-ii/) |
| 0050 | [Pow(x, n)](https://leetcode.com/problems/powx-n/) | 🟡 Medium | Math, Recursion | [✔️](./Math-Geometry/0050-powx-n/) |
| 0078 | [Subsets](https://leetcode.com/problems/subsets/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0078-subsets/) |
| 0090 | [Subsets II](https://leetcode.com/problems/subsets-ii/) | 🟡 Medium | Array, Backtracking | [✔️](./Arrays-Hashing/0090-subsets-ii/) |
| 0148 | [Sort List](https://leetcode.com/problems/sort-list/) | 🟡 Medium | Linked List, Two Pointers | [✔️](./Linked-List/0148-sort-list/) |
| 0153 | [Find Minimum in Rotated Sorted Array](https://leetcode.com/problems/find-minimum-in-rotated-sorted-array/) | 🟡 Medium | Array, Binary Search | [✔️](./Arrays-Hashing/0153-find-minimum-in-rotated-sorted-array/) |
| 0160 | [Intersection of Two Linked Lists](https://leetcode.com/problems/intersection-of-two-linked-lists/) | 🟢 Easy | Hash Table, Linked List | [✔️](./Arrays-Hashing/0160-intersection-of-two-linked-lists/) |
| 0234 | [Palindrome Linked List](https://leetcode.com/problems/palindrome-linked-list/) | 🟢 Easy | Linked List, Two Pointers | [✔️](./Linked-List/0234-palindrome-linked-list/) |
| 1295 | [Find Numbers with Even Number of Digits](https://leetcode.com/problems/find-numbers-with-even-number-of-digits/) | 🟢 Easy | Array, Math | [✔️](./Arrays-Hashing/1295-find-numbers-with-even-number-of-digits/) |
| 2553 | [Separate the Digits in an Array](https://leetcode.com/problems/separate-the-digits-in-an-array/) | 🟢 Easy | Array, Simulation | [✔️](./Arrays-Hashing/2553-separate-the-digits-in-an-array/) |
| 2784 | [Check if Array is Good](https://leetcode.com/problems/check-if-array-is-good/) | 🟢 Easy | Array, Hash Table | [✔️](./Arrays-Hashing/2784-check-if-array-is-good/) |
| 3921 | [Score Validator](https://leetcode.com/problems/score-validator/) | 🟢 Easy | — | [✔️](./Other/3921-score-validator/) |
| 3922 | [Minimum Flips to Make Binary String Coherent](https://leetcode.com/problems/minimum-flips-to-make-binary-string-coherent/) | 🟡 Medium | — | [✔️](./Other/3922-minimum-flips-to-make-binary-string-coherent/) |
| 3925 | [Concatenate Array With Reverse](https://leetcode.com/problems/concatenate-array-with-reverse/) | 🟢 Easy | — | [✔️](./Other/3925-concatenate-array-with-reverse/) |
| 3927 | [Minimize Array Sum Using Divisible Replacements](https://leetcode.com/problems/minimize-array-sum-using-divisible-replacements/) | 🟡 Medium | — | [✔️](./Other/3927-minimize-array-sum-using-divisible-replacements/) |
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

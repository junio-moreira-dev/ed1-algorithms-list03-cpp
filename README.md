# ED1 — Static Lists — List 03

Practice exercises for **Data Structures I** — Static (sequential) list operations: sorted insertion, removal, merging, and partitioning.

> Instituto Federal do Triângulo Mineiro — Campus Patrocínio
> Course: Technology in Systems Analysis and Development — 3rd Term
> Instructor: Júnio Moreira
> Date: 08/26/2026

---

## 📁 Project Structure

```
ed1-static-lists-list03-cpp/
└── src/
    ├── Exer01_SortedInsertStaticList.cpp
    ├── Exer02_RemoveElementByValue.cpp
    ├── Exer03_MergeSortedStaticLists.cpp
    └── Exer04_PartitionByPivot.cpp
├── .gitignore
├── CMakeLists.txt
├── main.cpp
├── README.md
├── External Libraries
└──Scratches and Consoles
```

> `External Libraries` and `Scratches and Consoles` are CLion/IntelliJ-generated project-view entries (not real folders tracked in the repo) — they show up automatically in the IDE sidebar and can be ignored when browsing the source on disk.

Each `.cpp` file is **standalone** (has its own `main()`) and is compiled as an independent executable. All of them follow the same three-block pattern:

| Block | Responsibility |
|---|---|
| **Pure logic** | Implements the algorithm itself, using STL (`vector`, `string`, etc). Does not perform `cin`/`cout`. |
| `onlineJudge()` | Adapter: reads input with `cin`, calls the pure logic, prints with `cout`. |
| `runExer...()` | Runs the examples from the statement locally and compares against the expected output (`[PASSED]` / `[FAILED]`). |

---

## 📝 Exercises

| # | File | Problem | Technique | Complexity |
|---|---|---|---|---|
| 1 | `Exer01_SortedInsertStaticList.cpp` | Insert a value into a sorted static list, keeping it sorted | Right-shift insertion (adapted from LeetCode #35) | O(n) |
| 2 | `Exer02_RemoveElementByValue.cpp` | Remove all occurrences of a value in-place, preserving relative order | Left-shift removal (adapted from LeetCode #27) | O(n) |
| 3 | `Exer03_MergeSortedStaticLists.cpp` | Merge two sorted static lists into one sorted list | Two-pointer merge (adapted from LeetCode #88) | O(n + m) |
| 4 | `Exer04_PartitionByPivot.cpp` | Stably partition a list into <pivot, ==pivot, >pivot groups | Stable three-way partition (adapted from LeetCode #2161) | O(n) |

<details>
<summary><strong>Details for each exercise (input, output, and example)</strong></summary>

### 1. Sorted Insertion into a Static List
*Source: adapted from LeetCode #35 - Search Insert Position*

**Input:** N (1 ≤ N ≤ 10⁴) and X (−10⁹ ≤ X ≤ 10⁹) on the first line; the second line contains N integers already sorted ascending.
**Output:** a single line with the N + 1 elements after inserting X at its correct position, keeping the list sorted (elements after the insertion point are shifted one position to the right).

```
Input            Output
4 5              1 3 5 6 7
1 3 6 7
```

### 2. Removing Elements by Value
*Source: LeetCode #27 - Remove Element*

**Input:** N (1 ≤ N ≤ 10⁴) and `val` (−10⁹ ≤ val ≤ 10⁹) on the first line; the second line contains N integers.
**Output:** first line with K, the number of elements remaining after removing every occurrence of `val` in-place; second line with the K resulting elements (left blank if K = 0). Relative order of the remaining elements must be preserved.

```
Input                    Output
4 3                      2
3 2 2 3                  2 2
```

### 3. Merging Sorted Static Lists
*Source: LeetCode #88 - Merge Sorted Array*

**Input:** N and M (1 ≤ N, M ≤ 10⁴) on the first line; the second line contains the N sorted elements of list A; the third line contains the M sorted elements of list B.
**Output:** a single line with the N + M elements of the merged list in ascending order, obtained via a linear two-pointer merge — **no sorting algorithm may be applied after the merge**.

```
Input            Output
3 3              1 2 2 3 5 6
1 2 3
2 5 6
```

### 4. Partitioning a List by Pivot
*Source: LeetCode #2161 - Partition Array According to Given Pivot*

**Input:** N (1 ≤ N ≤ 10⁴) and `pivot` (−10⁹ ≤ pivot ≤ 10⁹) on the first line; the second line contains N integers.
**Output:** a single line with the N elements reorganized so that all elements smaller than `pivot` come first, followed by all elements equal to `pivot`, followed by all elements greater than `pivot`. The **relative order within each of the three groups must be strictly preserved** (stability).

```
Input                        Output
8 10                         9 5 3 2 10 10 12 14
9 12 5 10 14 3 10 2
```

</details>

---

## 🚀 Running in CLion

1. Open the project and reload CMake (**Reload CMake Project**, the sync icon that appears when you edit `CMakeLists.txt`).
2. In the run target selector (top of the window), choose the desired exercise.
3. Click **Run** (▶) or **Debug** (🐞).

> **Tip:** each file toggles between two modes inside `int main()`:
> - **Local test mode** (default): runs `runExer...()` with the examples from the statement.
> - **Online judge mode**: comment out the `runExer...()` call and uncomment `onlineJudge()` before submitting to the judge.

```cpp
int main() {
    runExer01SortedInsertStaticList();  // <- local test mode (active)
    // onlineJudge();                   // <- online judge mode (commented)
    return 0;
}
```

---

## 💻 Running from the Terminal (without CLion)

If you prefer to compile manually with `g++`:

```bash
g++ -std=c++17 -Wall -Wextra -o exer01 src/Exer01_SortedInsertStaticList.cpp
./exer01
```

To test online judge mode from the terminal, redirect an input file:

```bash
echo "4 5
1 3 6 7" | ./exer01
```

---

## ⚠️ Watch Out For

- **Question 1** requires shifting elements to the right to open space for X — don't use `vector::insert` if the goal is to practice the manual shift logic, though it's acceptable as a reference implementation.
- **Question 2** must remove elements **in-place**, keeping relative order — don't just filter into a new vector and call it in-place unless the underlying array is still modified.
- **Question 3** forbids applying any sorting algorithm after combining the lists — merging must be done with the classic two-pointer technique in O(N + M).
- **Question 4** demands **stability**: within each of the three groups (less than, equal to, greater than the pivot), elements must keep their original relative order — a plain `partition`-style swap does not guarantee this.

---

## ✅ Prerequisites

- C++17-compliant compiler or newer (GCC, Clang, or MSVC)
- CMake ≥ 3.20
- CLion (recommended) or any IDE/editor of your choice

---

## 📚 Reference

Original exercise list: *Practice Exercises — Data Structures I* (08/26/2026).
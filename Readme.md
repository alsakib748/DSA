# C++ DSA Source Index

This folder contains the actual C++ code for the repository. The main project overview, roadmap, and complexity cheat sheet live in the [root README](../README.md).

Use this page when you want to jump straight to a file.

---

## Recommended order

Follow the folder numbers from top to bottom:

```text
3.Basic -> 5.Flowcharts -> 6.Variables -> 7.Operators -> 8.Conditionals
        -> 9.Loops -> 10.Patterns -> 11.Functions -> 12.Binary
        -> 13.Pointers -> 14.Arrays-I -> 15.Arrays-II
```

Each folder has practice questions and answer PDFs where available. Read the questions first, attempt them yourself, then compare with the code and answers.

---

## Conventions

- `code.cpp` is usually the first example from that topic.
- Files with descriptive names are focused practice problems.
- `* Questions.pdf` contains the practice set.
- `* Ans.pdf` contains the solutions.
- `.exe` files are local build outputs and can be ignored or deleted.

---

## 3. Basics

| File | What it covers |
|------|----------------|
| [FirstProgram.cpp](<3.Basic/FirstProgram.cpp>) | Program structure, `main`, `cout`, and the classic Hello World |

No practice PDF in this folder.

---

## 5. Flowcharts & Pseudocode

This topic is theory only. No source code yet.

| File | What it covers |
|------|----------------|
| [FlowchartQs.pdf](<5.Flowcharts & Pseudocode/FlowchartQs.pdf>) | Flowchart and pseudocode questions |
| [Flowchart_Solutions.pdf](<5.Flowcharts & Pseudocode/Flowchart_Solutions.pdf>) | Worked solutions |

---

## 6. Variables & Data Type

| File | What it covers |
|------|----------------|
| [code.cpp](<6.Variables & Data Type/code.cpp>) | Basic output and the starting point for variables and data types |

**Practice:** [Questions](<6.Variables & Data Type/Variables_DataTypes Questions.pdf>) and [Answers](<6.Variables & Data Type/Variables_DataTypes Ans.pdf>).

---

## 7. Operators

| File | What it covers |
|------|----------------|
| [Typecasting.cpp](<7.Operators/Typecasting.cpp>) | Implicit vs explicit conversion, integer division, character arithmetic, and boolean casting |

**Practice:** [Questions](<7.Operators/1-Operators Questions.pdf>) and [Answers](<7.Operators/Operators_Ans.pdf>).

---

## 8. Conditional Statements

The practice material is here, but the code file is still empty. This topic is next on the list.

| File | Status |
|------|--------|
| [code.cpp](<8.Conditional Statements/code.cpp>) | Coming soon |
| [Conditionals Questions.pdf](<8.Conditional Statements/Conditionals Questions.pdf>) | Ready |
| [Conditionals Ans.pdf](<8.Conditional Statements/Conditionals Ans.pdf>) | Ready |

---

## 9. Loops

| File | What it covers |
|------|----------------|
| [code.cpp](<9.Loops/code.cpp>) | Nested loops and printing a grid from user input |
| [PracticeQs.cpp](<9.Loops/PracticeQs.cpp>) | Extracting digits with `%` and `/`, then summing the odd digits |
| [Prime.cpp](<9.Loops/Prime.cpp>) | Prime check optimized to `O(sqrt n)` using `sqrt` |

**Practice:** [Questions](<9.Loops/1-Loops Questions.pdf>) and [Answers](<9.Loops/Loops Ans.pdf>).

---

## 10. Patterns

| File | What it covers |
|------|----------------|
| [NestedLoops.cpp](<10.Patterns/NestedLoops.cpp>) | Ten pattern programs: number square, star triangle, inverted triangle, Floyd's triangle, character triangle, hollow square, right pyramid, number triangle, full pyramid (two halves), and butterfly pattern |

**Practice:** [Questions](<10.Patterns/Patterns Questions.pdf>), [Answers](<10.Patterns/Patterns Ans.pdf>), and [Pattern slides](<10.Patterns/pattern slides cpp.pdf>).

---

## 11. Functions

| File | What it covers |
|------|----------------|
| [FunctionsProgram.cpp](<11.Functions/FunctionsProgram.cpp>) | Function declaration, definition, and calling |
| [Practice.cpp](<11.Functions/Practice.cpp>) | Factorial and binomial coefficient (`nCr`) using a helper function |

**Practice:** [Questions](<11.Functions/1-Functions Questions.pdf>), [Answers](<11.Functions/Functions Ans.pdf>), and [Test.pdf](<11.Functions/Test.pdf>).

---

## 12. Binary Number System

| File | What it covers |
|------|----------------|
| [code.cpp](<12. Binary Number System/code.cpp>) | Binary to decimal conversion |
| [DecToBinNum.cpp](<12. Binary Number System/DecToBinNum.cpp>) | Decimal to binary conversion |

**Practice:** [Questions](<12. Binary Number System/Binary Numbers Questions.pdf>) and [Answers](<12. Binary Number System/Binary Numbers Ans.pdf>).

---

## 13. Pointers

| File | What it covers |
|------|----------------|
| [code.cpp](<13. Pointers/code.cpp>) | Address-of, dereferencing, double pointers, float pointers, and null pointers |

**Practice:** [Questions](<13. Pointers/Pointers Questions.pdf>) and [Answers](<13. Pointers/Pointers Ans.pdf>).

---

## 14. Arrays I

| File | What it covers |
|------|----------------|
| [code.cpp](<14. Arrays-I/code.cpp>) | Array declaration, input, output, and length calculation |
| [array_pointer.cpp](<14. Arrays-I/array_pointer.cpp>) | Arrays decay to pointers when passed to functions |
| [array_pointer2.cpp](<14. Arrays-I/array_pointer2.cpp>) | Why an array name cannot be reassigned like a pointer |
| [pointer_arithmetic.cpp](<14. Arrays-I/pointer_arithmetic.cpp>) | Pointer increment, decrement, offset, and array access |
| [largest_array.cpp](<14. Arrays-I/largest_array.cpp>) | Find the largest element and its index in one pass |
| [linear_search.cpp](<14. Arrays-I/linear_search.cpp>) | Linear search, `O(n)` |
| [binary_search.cpp](<14. Arrays-I/binary_search.cpp>) | Binary search on a sorted array, `O(log n)` |
| [reverse_array_extra_space.cpp](<14. Arrays-I/reverse_array_extra_space.cpp>) | Reverse using an extra array, `O(n)` space |
| [reverse_array_2_pointer_approach.cpp](<14. Arrays-I/reverse_array_2_pointer_approach.cpp>) | Reverse in place with two pointers, `O(1)` space |

**Notes:** [Space and Time Complexity.pdf](<14. Arrays-I/Space and Time Complexity.pdf>).

---

## 15. Arrays II

| File | What it covers |
|------|----------------|
| [print_subarrays.cpp](<15. Arrays - II/print_subarrays.cpp>) | Print every subarray using three nested loops, `O(n^3)` |
| [max_subarray_sum.cpp](<15. Arrays - II/max_subarray_sum.cpp>) | Brute force maximum subarray sum, `O(n^3)` |
| [optimize_way_max_subArray_Sum2.cpp](<15. Arrays - II/optimize_way_max_subArray_Sum2.cpp>) | Improved maximum subarray sum, `O(n^2)` |
| [max_subarray_sum_kadanes_algo.cpp](<15. Arrays - II/max_subarray_sum_kadanes_algo.cpp>) | Kadane's algorithm, `O(n)` |
| [Trapping_Rainwater.cpp](<15. Arrays - II/Trapping_Rainwater.cpp>) | Trapping rain water with left and right max arrays, `O(n)` time and space |
| [buy_sell_stocks.cpp](<15. Arrays - II/buy_sell_stocks.cpp>) | Best time to buy and sell a stock using the best buy so far |
| [Assignment_1.cpp](<15. Arrays - II/Assignment_1.cpp>) | Check whether any value appears at least twice using sorting, `O(n log n)` |

---

## Where to go next

- [Project overview and roadmap](../README.md)
- [Curriculum](../Curriculum.pdf)
- Practice by picking any folder and solving the questions before opening the answer PDF

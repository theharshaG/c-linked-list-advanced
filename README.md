# c-linked-list-advanced

 C Linked List Advanced Operations

## Overview

This repository contains advanced Linked List programs developed in C. These programs demonstrate important Data Structures concepts such as linked list reversal (iterative and recursive) and finding the middle element using pointer techniques.

This project helps in understanding:

- Dynamic memory allocation
- Linked List traversal
- Iterative algorithms
- Recursive algorithms
- Pointer manipulation
- Fast and Slow pointer techniques

The programs are useful for:

- Beginners learning Data Structures
- College laboratory exercises
- Coding interview preparation
- Logic-building practice
- Understanding memory management

---

## Programs Included

### 1. Reverse Linked List (Iterative Method)

This program creates a linked list and reverses it using three pointers:

- `prev`
- `curr`
- `next`

#### Output Example

```text
Enter number of nodes:
5

Enter data:
10
20
30
40
50

Reversed List:

50 -> 40 -> 30 -> 20 -> 10 -> NULL
```

#### Concepts Used

- Linked List creation
- Dynamic memory allocation
- Iterative reversal
- Pointer reassignment
- Memory cleanup using free()

---

### 2. Reverse Linked List (Recursive Method)

This program reverses a linked list using recursion.

Recursive logic:

```text
Go till last node
↓
Reverse links while returning
↓
Return new head
```

#### Output Example

```text
Enter size:
5

Original:

10 -> 20 -> 30 -> 40 -> 50 -> NULL

Reverse:

50 -> 40 -> 30 -> 20 -> 10 -> NULL
```

#### Concepts Used

- Recursion
- Linked List reversal
- Recursive function calls
- Pointer manipulation

---

### 3. Find Middle Element (Fast and Slow Pointer)

This program finds the middle node efficiently.

Technique:

```text
Slow → moves 1 step
Fast → moves 2 steps
```

When fast reaches end:

```text
Slow = Middle Node
```

#### Output Example

```text
Enter size:
5

10
20
30
40
50

Middle = 30
```

Example (even nodes):

```text
10 → 20 → 30 → 40

Middle = 30
```

#### Concepts Used

- Fast pointer
- Slow pointer
- Efficient traversal
- Linked List optimization

---

## Technologies Used

- C Programming Language
- GCC Compiler
- VS Code
- CodeBlocks
- Turbo C

---

## Project Structure

```text
c-linked-list-advanced/
│
├── reverse_iterative.c
├── reverse_recursive.c
├── find_middle_node.c
└── README.md
```

---

## How to Compile

Compile:

```bash
gcc filename.c -o output
```

Run:

```bash
./output
```

---

## Learning Outcomes

After completing these programs, you will understand:

- Dynamic memory allocation
- Linked List creation
- Iterative reversal logic
- Recursive thinking
- Fast and slow pointer approach
- Memory management

---

## Future Improvements

Possible future additions:

- Insert at Position
- Delete at Position
- Circular Linked List
- Doubly Linked List
- Detect Loop
- Merge Two Lists
- Sort Linked List
- Stack using Linked List

---

## Author

**Harsha G**

Learning:

- C Programming
- Data Structures
- Embedded Systems
- Embedded C
- Problem Solving

# Dangling Pointer Bug in C

This repository demonstrates a common error in C programming: the dangling pointer. A dangling pointer occurs when a pointer variable points to a memory location that has been freed or is no longer valid.  This can lead to unpredictable behavior and program crashes.

The `bug.c` file contains the erroneous code. The `bugSolution.c` file provides a corrected version.

## How to Reproduce
1. Clone this repository.
2. Compile `bug.c` using a C compiler (e.g., GCC): `gcc bug.c -o bug`
3. Run the executable: `./bug`
4. Observe the unexpected output.  Repeat for `bugSolution.c` and note the difference.

## Solution
The solution avoids the dangling pointer issue by carefully managing memory allocation and pointer assignments.  Always ensure that a pointer points to a valid memory location before dereferencing it.
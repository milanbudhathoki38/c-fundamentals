# Fibonacci Sequence in C
My first programming project written in C during **Concepts of Programming** at Lyon College. This was my introduction to programming before transitioning to C++ and Python.

## What it does
Computes and prints the first 30 numbers in the Fibonacci sequence using an array.

## How to Compile and Run

```bash
gcc fibonacci.c -o fibonacci
./fibonacci
```

## Planned Improvements
- Take user input for how many numbers to print
- Recursive version vs iterative — performance comparison
- Visualize the Golden Ratio approaching 1.618 as n increases


## The Math
The Fibonacci sequence is defined by the recurrence relation:

```
f(0) = 0, f(1) = 1
f(n) = f(n-1) + f(n-2)
```

Each number is the sum of the two before it:

```
0, 1, 1, 2, 3, 5, 8, 13, 21, 34, 55, 89...
```

The ratio of consecutive Fibonacci numbers converges to the **Golden Ratio (φ ≈ 1.618)** — a concept directly connected to convergent series studied in Calculus 2.

```
3/2  = 1.5
5/3  = 1.666...
8/5  = 1.6
13/8 = 1.625
21/13 = 1.615...
34/21 = 1.619...  ← getting closer to 1.618 forever
```

## Note
This was my first program. I have since learned C++, Python, and JavaScript/Next.js. Planning to revisit and expand this project as my math and CS knowledge grows — especially the connections between Fibonacci, the Golden Ratio, and series convergence from Calculus 2.

## Course
Concepts of Programming — Lyon College 
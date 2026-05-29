# Fibonacci Sequence in C
My first programming project written in C during **Concepts of Programming** at Lyon College. This was my introduction to programming before transitioning to C++ and Python.

## What it does
Computes and prints the first 30 numbers in the Fibonacci sequence using an array.


## Sample Output
```
The first 30 Fibonacci numbers:
fib[ 0]= 0
fib[ 1] = 1
fib[ 2] = 1
fib[ 3] = 2
fib[ 4] = 3
fib[ 5] = 5
fib[ 6] = 8
fib[ 7] = 13
fib[ 8] = 21
fib[ 9] = 34
fib[10] = 55
fib[11] = 89
fib[12] = 144
fib[13] = 233
fib[14] = 377
fib[15] = 610
fib[16] = 987
fib[17] = 1597
fib[18] = 2584
fib[19] = 4181
fib[20] = 6765
fib[21] = 10946
fib[22] = 17711
fib[23] = 28657
fib[24] = 46368
fib[25] = 75025
fib[26] = 121393
fib[27] = 196418
fib[28] = 317811
fib[29] = 514229
```

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
Concepts of Programming(CSC-100) — Lyon College 

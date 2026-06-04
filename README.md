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

## Golden Ratio Convergence

| n | fib(n-1) | fib(n) | fib(n) / fib(n-1) | Difference from φ |
|---|----------|--------|-------------------|-------------------|
| 2 | 1 | 1 | 1.000000 | 0.618034 |
| 3 | 1 | 2 | 2.000000 | 0.381966 |
| 4 | 2 | 3 | 1.500000 | 0.118034 |
| 5 | 3 | 5 | 1.666667 | 0.048632 |
| 6 | 5 | 8 | 1.600000 | 0.018034 |
| 7 | 8 | 13 | 1.625000 | 0.006966 |
| 8 | 13 | 21 | 1.615385 | 0.002649 |
| 9 | 21 | 34 | 1.619048 | 0.000986 |
| 10 | 34 | 55 | 1.617647 | 0.000387 |
| 11 | 55 | 89 | 1.618182 | 0.000148 |
| 12 | 89 | 144 | 1.617978 | 0.000056 |
| 13 | 144 | 233 | 1.618056 | 0.000022 |
| 14 | 233 | 377 | 1.618026 | 0.000008 |
| 15 | 377 | 610 | 1.618037 | 0.000003 |
| 20 | 4181 | 6765 | 1.618034 | 0.000001 |
| 29 | 196418 | 317811 | 1.618034 | 0.000000 |

As n increases the ratio between consecutive Fibonacci numbers gets closer and closer to **φ = 1.6180339887...** — a value known as the **Golden Ratio**. The symbol φ (phi) is a Greek letter mathematicians use to represent this specific constant, the same way π (pi) represents 3.14159... The Golden Ratio is special because it is irrational — its decimal never ends and never repeats. In Calculus 2 terms this is called convergence — 
the ratio is a sequence that approaches a fixed limit but never exactly reaches it. The difference from φ in the table above gets smaller every row, approaching zero forever — that is convergence in action.

## Connection to Pascal's Triangle

Pascal's Triangle is a triangle of numbers where each number is the sum of the two above it:

```
        1
       1 1
      1 2 1
     1 3 3 1
    1 4 6 4 1
   1 5 10 10 5 1
```

If you add the numbers along the diagonal shallow lines you get the Fibonacci sequence:

```
1
1
1+1 = 2
1+2 = 3
1+3+1 = 5
1+4+3 = 8
1+5+6+1 = 13
```

The Fibonacci numbers appear hidden inside Pascal's Triangle — two of the most famous sequences in mathematics are secretly connected. This connection shows up in combinatorics, probability, and algebra — far beyond just computing a sequence.

## Note
This was my first program. I have since learned C++, Python, and JavaScript/Next.js. Planning to revisit and expand this project as my math and CS knowledge grows — especially the connections between Fibonacci, the Golden Ratio, and series convergence.

## Course
Concepts of Programming — Lyon College(Spring 2025)


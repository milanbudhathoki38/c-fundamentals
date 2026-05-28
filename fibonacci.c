//******************************************************************************/
// File: fibonacci.c                                                           
// Description: Computes and prints the first 30 numbers in the Fibonacci     
//              sequence using an array.                           
// Input: No user input                                                       
// Output: Prints the first 30 Fibonacci numbers, one per line, in the format:
//         fib[ 0] = 0                                                         
//         fib[ 1] = 1                                                         
//         fib[ 2] = 1                                                         
//         fib[ 3] = 2                                                         
//         fib[ 4] = 3                                                         
//         fib[ 5] = 5                                                         
//         ...                                                                 
//         fib[29] = 514229                                                    
// Author: Milan Budhathoki (Pledged)                                         
// Date: 04/11/2025
// Professor: Dr. Marcus Birkenkrahe                                                          
//*****************************************************************************/

#include <stdio.h>
#define N 30  //  SET array index `N` to 30

int main() {
    // SET integer array `fib` of size N
    int fib[N];

    // SET first two values
    fib[0] = 0;
    fib[1] = 1;

    // FOR i from 2 to 29; DO
    for (int i = 2; i < N; i++) {  
        fib[i] = fib[i - 1] + fib[i - 2]; // ADD element (i-1) to element (i-2)
    } // END FOR

  // PRINT "The first N Fibonacci numbers:"
    printf("The first 30 Fibonacci numbers:\n");
    for (int i = 0; i < N; i++) { // FOR i from 0 to 29; DO
        printf("fib[%2d] = %d\n", i, fib[i]);  // PRINT "fib[i] = " + result
    } // END FOR

    return 0;
}

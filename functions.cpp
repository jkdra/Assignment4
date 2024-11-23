#include "header.h"

/*
 * printHeader
 * this function prints the header of the program
 */
void printHeader() {
    cout << " * AUTHOR : Jawad Khadra\n"
         << " * STUDENT ID : 1312092 (IVC)\n"
         << " * ASSIGNMENT #4: Assessing Recursion Performance\n"
         << " * CLASS : CS1B\n"
         << " * SECTION : MW: 7:30p - 9:50p\n"
         << " * DUE DATE : Nov. 22, 2024\n";
}

/*
 * displayMenu
 *
 * this function displays the menu of the program
 */
void displayMenu() {
    cout << "\n\nMENU OPTIONS\n"
         << "1 – Calculate and Display Factorial of a Number\n"
         << "2 – Calculate and Display Fibonacci Series of a Number\n"
         << "3 – Compare Performance for Factorial Implementations\n"
         << "4 – Compare Performance for Fibonacci Series Implementations\n"
         << "0 - EXIT\n"
         << "Enter an option (0 to exit): ";
}

/*
 * factorialRecursive
 *
 * this function calculates the factorial of a number recursively
 *
 * @param n: the number to calculate the factorial of
 * @return: the factorial of the number
 */
unsigned long long factorialRecursive(int n) {
    if (n == 0) return 1;
    else return n * factorialRecursive(n - 1); // RECURSIVE - calculate the factorial of the number
}

/*
 * factorialIterative
 *
 * this function calculates the factorial of a number iteratively
 *
 * @param n: the number to calculate the factorial of
 * @return: the factorial of the number
 */
unsigned long long factorialIterative(int n) {
    int result = 1;   // CALC - used to calculate the factorial
    for (int i = 1; i <= n; i++) result *= i;
    return result;
}

/*
 * fibonacciRecursive
 *
 * this function calculates the fibonacci of a number recursively.
 *
 * @param n: the number to calculate the fibonacci of
 * @return: the fibonacci of the number
 */
unsigned long long fibonacciRecursive(int n) {
    if (n <= 1) return n;
    return fibonacciRecursive(n - 1) + fibonacciRecursive(n - 2);
}


/*
 * fibIterative
 *
 * this function calculates the fibonacci of a number iteratively, and prints the series
 *
 * @param n: the number to calculate the fibonacci of
 * @return: the fibonacci of the number
 */
unsigned long long fibonacciIterative(int n) {
    if (n <= 1) return n;

    unsigned long long prev1 = 0, prev2 = 1, current;   // CALC - used to calculate the fibonacci series
    for (int i = 2; i <= n; ++i) {
        current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
    return current;
}

/*
 * printFibonacciSeriesRecursive
 *
 * this function prints the fibonacci series of a number recursively
 *
 * @param n: the number to calculate the fibonacci of
 */
void printFibonacciSeriesRecursive(int count) {
    for (int i = 0; i < count + 1; ++i) cout << fibonacciRecursive(i) << (i < count ? ", " : "");
}

/*
 * benchmarkFibSeriesRecursive
 *
 * this function calculates the fibonacci series of a number recursively, without printing it
 *
 * @param n: the number to calculate the fibonacci of
 */
void benchmarkFibSeriesRecursive(int count) {
    for (int i = 0; i < count + 1; ++i) fibonacciRecursive(i);
}

/*
 * benchmarkFibSeriesIterative
 *
 * this function calculates the fibonacci series of a number iteratively, without printing it
 *
 * @param n: the number to calculate the fibonacci of
 */
void benchmarkFibSeriesIterative(int count) {
    unsigned long long prev1 = 0, prev2 = 1;   // CALC - used to calculate the fibonacci series
    for (int i = 2; i < count + 1; ++i) {
        unsigned long long current = prev1 + prev2;
        prev1 = prev2;
        prev2 = current;
    }
}
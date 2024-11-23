//
// Created by Jawad Khadra on 11/20/24.
//

#ifndef HEADER_H
#define HEADER_H

#include <iostream>
#include <chrono>
#include <ctime>

using namespace std;

/*
 * printHeader
 * this function prints the header of the program
 */
void printHeader();

/*
 * displayMenu - displays the menu of the program
 */
void displayMenu();

/*
 * factorialRecursive - calculates the factorial of a number recursively
 * @param n: the number to calculate the factorial of
 * @return: the factorial of the number
 */
unsigned long long factorialRecursive(int n);

/*
 * factorialIterative - calculates the factorial of a number iteratively
 * @param n: the number to calculate the factorial of
 * @return: the factorial of the number
 */
unsigned long long factorialIterative(int n);

/*
 * fibonacciRecursive - calculates the fibonacci of a number recursively
 * @param n: the number to calculate the fibonacci of
 * @return: the fibonacci of the number
 */
unsigned long long fibonacciRecursive(int n);

/*
 * fibonacciIterative - calculates the fibonacci of a number iteratively
 * @param n: the number to calculate the fibonacci of
 * @return: the fibonacci of the number
 */
unsigned long long fibonacciIterative(int n);

/*
 * printFibonacciSeriesRecursive - prints the fibonacci series of a number recursively
 * @param n: the number to calculate the fibonacci of
 */
void printFibonacciSeriesRecursive(int count);

/*
 * benchmarkFibSeriesRecursive - A redundant function used only to calculate the recursive fibonacci series, without printing it
 * @param n: the number to calculate the fibonacci of
 */
void benchmarkFibSeriesRecursive(int count);

/*
 * benchmarkFibSeriesIterative - A redundant function used only to calculate the iterative fibonacci series, without printing it
 * @param n: the number to calculate the fibonacci of
 */
void benchmarkFibSeriesIterative(int count);

#endif //HEADER_H

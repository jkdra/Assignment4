/*
 * AUTHOR : Jawad Khadra
 * STUDENT ID : 1312092 (IVC)
 * ASSIGNMENT #4: Assessing Recursion Performance
 * CLASS : CS1B
 * SECTION : MW: 7:30p - 9:50p
 * DUE DATE : Nov. 22, 2024
 */

#include "header.h"

using namespace std;
using namespace std::chrono;

/*
 * Assignment 4: Assessing Recursion Performance
 *
 * this program allows the user to compare the performance of recursive and iterative algorithms
 * through factorial and fibonacci functions for numbers.
 *
 */


// main
int main() {
    int menuInput;                                 // INPUT - the menu option to choose from
    int numberInput;                               // INPUT - the number to calculate the factorial or fibonacci of
    time_point<high_resolution_clock> start, stop; // CALC & OUTPUT - the start and end time of a comparative test

    // First, print the header of the program
    printHeader();

    do {
        // Display the menu
        displayMenu();

        // Collect the input
        cin >> menuInput;

        // Check if the input is valid
        if (cin.fail()) {
            cerr << "\n\nInvalid Input. Please try again.\n";
            cin.clear();
            cin.ignore();
        }

        // Then, perform the corresponding action based on the menu option
        switch (menuInput) {
            case 0:
                // Do nothing, which will exit the program.
                break;
            case 1:
                // Calculate factorial using recursive algorithm
                cout << "\n\nEnter a number to calculate the factorial of: ";
                cin >> numberInput;
                cout << "\n\nThe factorial of " << numberInput << " is: " << factorialRecursive(numberInput);
                break;
            case 2:
                // Calculate fibonacci using recursive algorithm
                cout << "\n\nEnter a number to calculate the fibonacci series of: ";
                cin >> numberInput;
                cout << "\nThe fibonacci series of " << numberInput << " is: ";
                printFibonacciSeriesRecursive(numberInput);
                break;
            case 3:
                // Compare performance of recursive and iterative algorithms for factorial
                cout << "\n\nEnter a number to compare the performance of the factorial implementations: ";
                cin >> numberInput;

                // Make sure to run multiple times to get a result in seconds

                start = high_resolution_clock::now();
                factorialRecursive(numberInput);
                stop = high_resolution_clock::now();

                cout << "\nThe time taken to calculate using recursion is: " << duration_cast<nanoseconds>(stop - start).count() << "ns";

                start = high_resolution_clock::now();
                factorialIterative(numberInput);
                stop = high_resolution_clock::now();

                cout << "\nThe time taken to calculate using iteration is: " << duration_cast<nanoseconds>(stop - start).count() << "ns";
                break;
            case 4:
                // Compare performance of recursive and iterative algorithms for fibonacci
                    cout << "\n\nEnter a number to compare the performance of the fibonacci series implementations: ";
                    cin >> numberInput;

                    start = high_resolution_clock::now();
                    benchmarkFibSeriesRecursive(numberInput);
                    stop = high_resolution_clock::now();

                    cout << "\nThe time taken to calculate using recursion is: " << duration_cast<nanoseconds>(stop - start).count() << "ns";

                    start = high_resolution_clock::now();
                    benchmarkFibSeriesIterative(numberInput);
                    stop = high_resolution_clock::now();

                    cout << "\nThe time taken to calculate using iteration is: " << duration_cast<nanoseconds>(stop - start).count() << "ns";
                break;
            default:
                // Tell the user that the input is invalid
                cerr << "\n\nInput must be between 0 and 4. Please try again.\n";
                break;
        }
    } while (menuInput != 0);
    return 0;
}

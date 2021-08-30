/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 Task A

Write a program to figure out the smaller number between 
two integer numbers that the user has inputted.
Prints out the smaller from the two numbers. 
*/

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber; 
    
    // Takes the numbers, user input
    cout << "Enter the first number: "; 
    cin >> firstNumber; 
    cout << "Enter the second number: ";
    cin >> secondNumber;

    // Compares the number and prints out which number is smaller
    if (firstNumber < secondNumber) { 
        cout << "\nThe smaller of the two is: " << firstNumber << endl;
    } else { 
        cout << "\nThe smaller of the two is " << secondNumber << endl;
    }


    return 0;
}
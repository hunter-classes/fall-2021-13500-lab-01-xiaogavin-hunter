/*
Author: Gavin Xiao
Course: CSCI-135
Instructor: Tong Yi
Assignment: Lab 1 Task B

User inputs three numbers, and the program compares 
these numbers to figure out the smallest number. 

*/

#include <iostream>
using namespace std;

int main() {
    int firstNumber, secondNumber, thirdNumber; 
    
    // Takes the numbers, user input
    cout << "Enter the first number: "; 
    cin >> firstNumber; 
    cout << "Enter the second number: ";
    cin >> secondNumber;
    cout << "Enter the third number: ";
    cin >> thirdNumber;

    // Compares the numbers, firstNumber to secondNumber, then that number to thirdNumber
    if(firstNumber < secondNumber) { 
        if(firstNumber < thirdNumber) { 
            cout << "\nThe smaller of the three is: " << firstNumber << endl;        
        } else { 
            cout << "\nThe smaller of the three is: " << thirdNumber << endl;   
        }
    } else if(secondNumber < thirdNumber) { 
        cout << "\nThe smaller of the three is: " << secondNumber << endl;   
    } else {
        cout << "\nThe smaller of the three is: " << thirdNumber << endl;   
    }

    return 0;
}
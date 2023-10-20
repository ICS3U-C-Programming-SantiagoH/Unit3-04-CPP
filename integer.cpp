// Copyright (c) 2023 Santiago Hewett All rights reserved.
//
// Created by: Santiago Hewett
// Date: Oct, 19, 2023
// This program will ask the user
// for a integer then check if the integer
// is positive negative or zero

#include <iostream>

// Include this for std::setprecision

#include <cmath>
#include <iomanip>

int main() {
    // declare userInt variable

    int userInt;

    // get the userInt and display message

    std::cout << "This program asks the user for a integer ";
    std::cout << "and then displays if it is positive, negative ";
    std::cout << "or just zero.";
    std::cout << "\nEnter an integer: ";
    std::cin >>
        userInt;

    // Check if the number is positive, negative or just zero
    if (userInt > 0) {
        // display that the users integer is positive

        std::cout << "\n";
        std::cout << userInt << " is positive";
    } else if (userInt < 0) {
        // display that the users integer is negative

        std::cout << "\n";
        std::cout << userInt << " is negative";
    } else {
        // display that the user integer is just zero

        std::cout << "\n";
        std::cout << "Your number is just zero";
    }
}

// Copyright (c) 2022 Ina Tolo All rights reserved.
//
// Created by: Ina Tolo
// Created on: Jan. 18, 2022
// This program asks the user for the base and
// and height, then determines the area of a triangle.

#include <iostream>
#include <iomanip>


// this function calculates the area of a triangle
void CalcArea(float baseFloat, float heightFloat) {
    // declares area variable
    float area;

    // calculates the area
    area = (baseFloat * heightFloat) / 2;

    // displays results to user
    std::cout << "With a base of " << std::fixed;
    std::cout << std::setprecision(2) << baseFloat;
    std::cout << "cm and a height of  " << std::fixed;
    std::cout << std::setprecision(2) << heightFloat << "cm,\n";
    std::cout << "the area of the triangle is " << std::fixed;
    std::cout << std::setprecision(2) << area << "cm^2";
}


// this function checks for any invalid inputs
int main() {
    // displays opening message
    std::cout << "Today we will calculate the area of a triangle!";
    std::cout << std::endl;
    std::cout << std::endl;


    // declares variables
    std::string baseString, heightString;
    float baseFloatUser, heightFloatUser;

    // collects base and height from user
    std::cout << "Enter the base (cm): ";
    std::cin >> baseString;
    std::cout << "Enter the height (cm): ";
    std::cin >> heightString;
    std::cout << std::endl;

    // checks if the user has entered the correct number
    try {
        // convert the user's input to a float
        baseFloatUser = std::stof(baseString);
        heightFloatUser = std::stof(heightString);

        // checks if numbers are greater than 0
        if (baseFloatUser > 0 && heightFloatUser > 0) {
            CalcArea(baseFloatUser, heightFloatUser);
        } else {
            std::cout << "The base and height must be greater than 0.";
        }
    // determines if the input is valid
    } catch (std::invalid_argument) {
    // tells user did the input is not a number
    std::cout << "Invalid data entered! Only numbers can be accepted!\n";
    }
}

// Copyright (c) 2022 Navin Baleko All rights reserved.
//
// Created by: Navin Balekombeole
// Created on: Jan 19, 2022
// This program calculates the area of a triangle
#include <iostream>


void CalcArea(float base, float height) {
    // declare variables
    float area;

    // calculate area
    area = base * height / 2;
    std::cout << "The area is " << area << " cm squared.";
}


int main() {
    // declare variables
    std::string baseString;
    std::string heightString;
    float baseInput;
    float heightInput;

    // get input
    std::cout << "Enter the base of this triangle (cm): ";
    std::getline(std::cin, baseString);

    std::cout << "Enter the height (cm): ";
    std::getline(std::cin, heightString);
    std::cout << std::endl;

    // error checking
    try {
        baseInput = std::stof(baseString);
        heightInput = std::stof(heightString);
        if (baseInput <= 0 || heightInput <= 0) {
            std::cout << "Numbers must be positive.";
        } else {
            CalcArea(baseInput, heightInput);
        }
    } catch (std::invalid_argument) {
        std::cout << "Invalid input(s).";
    }
}

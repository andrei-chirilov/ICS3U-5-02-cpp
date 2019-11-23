// Copyright (c) 2019 Andrei Chirilov All rights reserved.
//
// Created by: Andrei Chirilov
// Created on: November 2019
// This program calculates the area of a triangle using functions


#include <iostream>
#include <string>

void Area(float base, float height) {
    // This function calculates area

    // declaring area
    // process
    float area = (base * height) / 2;

    // output
    std::cout << "The area is " << area << " cm²" << std::endl;
}

main() {
    // This function asks for the base and hieght

    // variables
    std::string stringBase;
    std::string stringHeight;
    float base = 0;
    float height = 0;


    while (true) {
        try {
            // input
            std::cout << "What is the base: " << std::endl;
            std::cin >> stringBase;
            std::cout << "What is the height: " << std::endl;
            std::cin >> stringHeight;
            // turns variables into float
            base = std::stof(stringBase);
            height = std::stof(stringHeight);

            // runs Area()
            Area(base, height);
            break;
        } catch (std::invalid_argument) {
            std::cout << "Invalid input. Try again." << std::endl;
            continue;
        }
    }
}

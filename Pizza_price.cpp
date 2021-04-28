// Copyright (c) 2021 Hussein Mansour All rights reserved
//
// Created by: Hussein Mansour
// Created on: Tue/Apr27/2021
// This program calculates the price of a pizza


#include <iostream>


int main() {
    // this function calculates the price
    const float LABOR = 0.75;
    const float RENT = 1.00;
    const float COST_PER_INCH = 0.50;
    const float HST = 0.13;

    float diameter;
    float sub_total;
    float total;

    // input:
    std::cout << "Enter the diameter of the pizza you would like (inch):"
    << std::endl;
    std::cin >> diameter;

    // process:
    sub_total = LABOR + RENT + (diameter * COST_PER_INCH);
    total = sub_total + (sub_total * 0.13);

    // output:
    std::cout << "" << std::endl;
    std::cout << "The cost of " << (diameter) << " (inch) " << "pizza is $"
    << (total) <<std::endl;
    std::cout << "Done." << std::endl;
}

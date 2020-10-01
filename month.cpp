// Copyright (c) 2020 Marcus A. Mosley All rights reserved.
//
// Created by Marcus A. Mosley
// Created on September 2020
// This program gives the number of days in a month,
//     even when there is a leap year

#include <iostream>
#include <string>

int main() {
    // This program gives the number of days in a month,
    //     even when there is a leap year
    std::string month_str;
    std::string year_str;
    int month_int;
    int year_int;

    // Input
    year_str = "0";
    std::cout << "Enter a month in the form of a number (1-12): ";
    std::cin >> month_str;
    std::cout << "" << std::endl;
    if (month_str == "2") {
        std::cout << "Please enter the year: ";
        std::cin >> year_str;
        std::cout << "" << std::endl;
    }

    // Process & Output
    try {
        // Output
        month_int = std::stoi(month_str);
        year_int = std::stoi(year_str);
        switch (month_int) {
            case 1:
                std::cout << "January has 31 days!" << std::endl;
                break;
            case 2:
                if (year_int % 4 == 0) {
                    if (year_int % 100 == 0) {
                        if (year_int % 400 == 0) {
                            std::cout << "February has 29 days during"
                                " a leap year!" << std::endl;
                        } else {
                            std::cout << "February has 28 days during"
                            " a common year!" << std::endl;
                        }
                    } else {
                        std::cout << "February has 29 days during a leap year!"
                        << std::endl;
                    }
                } else {
                     std::cout << "February has 28 days during a common year!"
                     << std::endl;
                }
                break;
            case 3:
                std::cout << "March has 31 days!" << std::endl;
                break;
            case 4:
                std::cout << "April has 30 days!" << std::endl;
                break;
            case 5:
                std::cout << "May has 31 days!" << std::endl;
                break;
            case 6:
                std::cout << "June has 30 days!" << std::endl;
                break;
            case 7:
                std::cout << "July has 31 days!" << std::endl;
                break;
            case 8:
                std::cout << "August has 31 days!" << std::endl;
                break;
            case 9:
                std::cout << "September has 30 days!" << std::endl;
                break;
            case 10:
                std::cout << "October has 31 days!" << std::endl;
                break;
            case 11:
                std::cout << "November has 30 days!" << std::endl;
                break;
            case 12:
                std::cout << "December has 31 days!" << std::endl;
                break;
            default :
                std::cout << "That is not a valid month!" << std::endl;
        }
    } catch (std::invalid_argument) {
    std::cout << "You have not inputted two integers,"
              " please input a number for both the month"
              " (0 - 12) and the year!" << std::endl;
    }
}

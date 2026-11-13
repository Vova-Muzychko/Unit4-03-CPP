// Copyright (c) 2026 [Your Name] All rights reserved.
//
// Created by: Vova
// Created on: November 13 2026
// This program asks for a whole number and displays the square of every
// number from 0 up to that number.

#include <cmath>
#include <iostream>
#include <string>

int main() {
  // Declare variables
  std::string userString;
  int userNum;
  int answer;

  // Get user input
  std::cout << "Enter a whole number: ";
  std::cin >> userString;
  std::cout << std::endl;

  // Try to convert string to an integer
  try {
    size_t pos;
    userNum = std::stoi(userString, &pos);

    // Ensure there are no extra characters (like decimals or letters)
    if (pos != userString.length()) {
      throw std::invalid_argument("Invalid characters");
    }

    // Check if the number is negative
    if (userNum < 0) {
      std::cout << "Please enter a positive whole number." << std::endl;
    } else {
      // Loop from 0 up to userNum
      for (int counter = 0; counter <= userNum; counter++) {
        answer = pow(counter, 2);
        std::cout << counter << "² = " << answer << std::endl;
      }
    }
  } catch (std::invalid_argument) {
    // Catch non-integer inputs
    std::cout << userString << " is not a valid whole number." << std::endl;
  }

  std::cout << "\nDone." << std::endl;
  return 0;
}

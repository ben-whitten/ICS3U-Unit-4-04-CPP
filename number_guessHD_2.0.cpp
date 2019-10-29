// Copyright (c) 2019 St. Mother Teressa HS All rights reserved.
//
// Created by: Ben Whitten
// Created on: October 2019
// This is a program which makes you play a number guess game.

#include <iostream>
#include <cstdlib>
int rand();

int main() {
    // This is what runs the game.
    std::string guessedNumberAsString;
    int guessedNumber;

    // Input
    std::cout << "I am thinking of a number..." << std::endl;

    while (true) {
        std::cout << "What do you think it is?: ";
        std::cin >> guessedNumberAsString;
        std::cout << "" << std::endl;

        try {
            guessedNumber = std::stoi(guessedNumberAsString);

            // Process
            if (guessedNumber > 0 && guessedNumber < 10) {
                if (guessedNumber == (rand() % 10) + 1) {
                // Output
                    std::cout << "You did it, you won!";
                    std::cout << "" << std::endl;
                    break;
                } else {
                std::cout << "Wrong, try again.";
                std::cout << "" << std::endl;
                }
            } else {
                std::cout << "Not a valid number.";
                std::cout << "" << std::endl;
            }
        } catch (std::invalid_argument) {
            std::cout << "That was not a positive and/or whole number."
            << std::endl;
            std::cout << "" << std::endl;
        }
    }
}

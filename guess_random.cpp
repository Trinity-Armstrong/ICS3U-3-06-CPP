// Copyright (c) 2019 Trinity Armstrong All rights reserved.
//
// Created by: Trinity Armstrong
// Created on: October 2019
// This is the guess the number program

#include <iostream>
#include <cstdlib>
#include <string>

int main() {
    // This runs the guess the number program

    // Random number seed
    unsigned int seed = time(NULL);

    // variables
    int random_number = rand_r(&seed) % 10;
    std::string user_guess_string;
    int user_guess;

    // Input
    std::cout << "Guess a number between 0 and 9 (integer): ";
    std::cin >> user_guess_string;
    std::cout << "" << std::endl;

    // Process
    try {
        user_guess = std::stoi(user_guess_string);
        if (user_guess == random_number) {
            std::cout << "You are correct!!!" << std::endl;
    }   else {
            std::cout << "Sorry, try again :)" << std::endl;
    }
    } catch (std::invalid_argument) {
        std::cout << "That is not an integer";
    }
}

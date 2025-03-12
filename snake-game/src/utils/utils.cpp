#include "utils.h"
#include <cstdlib>
#include <ctime>
#include <iostream>

// Function to generate a random number within a specified range
int randomInRange(int min, int max) {
    return min + (std::rand() % (max - min + 1));
}

// Function to clear the console screen
void clearScreen() {
    // ANSI escape code to clear the screen
    std::cout << "\033[2J\033[1;1H";
}

// Function to initialize random seed
void initializeRandomSeed() {
    std::srand(static_cast<unsigned int>(std::time(nullptr)));
}
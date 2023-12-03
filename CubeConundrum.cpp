// Chase Condron
// Advent of Code 2023 - Day 2

// The Elf would first like to know which games would have been possible if the bag contained only 12 red cubes, 13 green cubes, and 14 blue cubes?
// In the example above, games 1, 2, and 5 would have been possible if the bag had been loaded with that configuration. However, game 3 would have been impossible
// because at one point the Elf showed you 20 red cubes at once; similarly, game 4 would also have been impossible because the Elf showed you 15 blue cubes at once.
// If you add up the IDs of the games that would have been possible, you get 8.
// Determine which games would have been possible if the bag had been loaded with only 12 red cubes, 13 green cubes, and 14 blue cubes. What is the sum of the IDs of those games?

#include <iostream>
#include <string>
#include <fstream>
#include <array>
#include <vector>
#include <sstream>
#include <map>

int main() {
    std::string line;
    std::ifstream input_file("day2_input.txt");
    if (!input_file.is_open()) {
        std::cerr << "Error opening file... check path" << std::endl;
        return 1;
    }
    if (input_file.is_open()) {
        while (std::getline(input_file, line)){
        }
    }
}

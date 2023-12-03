// Chase Condron
// Advent of Code 2023 - Day 1

// The newly-improved calibration document consists of lines of text; each line originally contained a specific calibration value that the Elves now need to recover.
// On each line, the calibration value can be found by combining the first digit and the last digit (in that order) to form a single two-digit number.
#include <iostream>
#include <fstream>
#include <string>
#include <vector>
int adder = 0;
void find_digit(const std::string& line);

int main() {
    std::string line;
    std::ifstream input_file("day1_input.txt");
    if (!input_file.is_open()) {
        std::cerr << "Error opening file... check path" << std::endl;
        return 1;
    }
    if (input_file.is_open()) {
        while (std::getline(input_file, line)) {
            find_digit(line);
        }
    }
}

void find_digit(const std::string& line) {
    std::vector<int> nums;
    for(char ch : line) {
        if(isdigit(ch)) {
            int number = ch - '0';
            nums.push_back(number);
        }
    }
    int first_element = nums.front();
    int last_element = nums.back();
    int concat = 10*first_element+last_element;
    adder += concat;
    nums.clear();
}
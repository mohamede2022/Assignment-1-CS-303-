#include "func.h"

int main() {
    int dataArray[MAX_ROWS][MAX_COLS];
    int numRows = 0;

    std::string filename = "data.txt";
    int choice = 1;

    while (choice != 5) {
        try {
            readDataFromFile(dataArray, numRows);

            std::cout << "What would you like to do to the Array?\n"
                      << "1. Check if a certain integer exists\n"
                      << "2. Modify an integer in the array\n"
                      << "3. Add a new integer to the end of the array\n"
                      << "4. Replace the old value with 0\n"
                      << "5. Quit\n\n";
            std::cin >> choice;

            if (choice == 1) {
                try {
                    int target;
                    std::cout << "Enter the number you want to check\n";
                    std::cin >> target;
                    int index = findInteger(dataArray, numRows, target);
                    std::cout << std::endl;
                    std::cout << "Integer " << target << " found at index " << index << std::endl;
                } catch (const std::runtime_error& e) {
                    std::cerr << e.what() << std::endl;
                }
            }

            if (choice == 2) {
                int modifyIndex;
                int newValue;
                try {
                    std::cout << "\nAt what index is the number you want to modify?\n";
                    std::cin >> modifyIndex;
                    std::cout << "\nWhat is the integer you want to change it to?\n";
                    std::cin >> newValue;
                    int oldValue = modifyInteger(dataArray, numRows, modifyIndex, newValue);
                    std::cout << "Modified integer at index " << modifyIndex << ". Old value: " << oldValue
                              << ", New value: " << newValue << std::endl;
                } catch (const std::exception& e) {
                    std::cerr << e.what() << std::endl;
                }
            }

            if (choice == 3) {
                int newInt;
                try {
                    std::cout << "What integer would you like to add?\n";
                    std::cin >> newInt;
                    addInteger(dataArray, numRows, newInt);
                    std::cout << "Added integer " << newInt << " to the end of the array" << std::endl;
                } catch (const std::exception& e) {
                    std::cerr << e.what() << std::endl;
                }
            }

            if (choice == 4) {
                int modifyIndex;
                std::cout << "At what index is the number you want to change to 0?\n";
                std::cin >> modifyIndex;
                replaceOrRemoveAtIndex(dataArray, numRows, modifyIndex);
            }
        } catch (const std::exception& e) {
            std::cerr << e.what() << std::endl;
        }
    }

    return 0;
}
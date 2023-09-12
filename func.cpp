#include "func.h"

// Function to read data from a file into a 2D array
void readDataFromFile(int data[MAX_ROWS][MAX_COLS], int& numRows) {
    const std::string filename = "data.txt";  // Set the filename here

    std::ifstream file(filename);
    if (!file.is_open()) {
        throw std::runtime_error("Error opening file");
    }

    numRows = 0;
    int num;

    while (file >> num) {

        data[numRows][0] = num;
        numRows++;
    }

    file.close();
}

// Function to check if an integer exists in the array and return its index
int findInteger(const int data[MAX_ROWS][MAX_COLS], int numRows, int target) {
    for (int i = 0; i < numRows; ++i) {
        for (int j = 0; j < MAX_COLS; ++j) {
            if (data[i][j] == target) {
                return i * MAX_COLS + j;
            }
        }
    }
    throw std::runtime_error("Integer not found in the array");
}

// Function to modify the value of an integer at a specific index
int modifyInteger(int data[MAX_ROWS][MAX_COLS], int numRows, int index, int newValue) {
    if (index < 0 || index >= numRows * MAX_COLS) {
        throw std::out_of_range("Index out of range");
    }

    int row = index / MAX_COLS;
    int col = index % MAX_COLS;
    int oldValue = data[row][col];
    data[row][col] = newValue;
    return oldValue;
}

// Function to add a new integer to the end of the array
void addInteger(int data[MAX_ROWS][MAX_COLS], int& numRows, int newValue) {
    if (numRows == MAX_ROWS) {
        throw std::overflow_error("Array is full, cannot add more integers");
    }

    int row = numRows;
    data[row][0] = newValue;
    numRows++;
}

// Function to replace or remove an integer at a specific index
void replaceOrRemoveAtIndex(int data[MAX_ROWS][MAX_COLS], int& numRows, int index) {
    if (index >= 0 && index < numRows * MAX_COLS) {
        int row = index / MAX_COLS;
        int col = index % MAX_COLS;
        data[row][col] = 0; // Replace the integer at the specified index with 0
    } else if (index >= numRows * MAX_COLS) {
        // Index is out of bounds
        std::cout << "Index is out of bounds. No changes made." << std::endl;
    } else {
        // Index is negative, which is invalid
        std::cout << "Invalid index. No changes made." << std::endl;
    }
}
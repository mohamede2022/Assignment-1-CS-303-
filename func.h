#include <iostream>
#include <fstream>
#include <vector>
const int MAX_ROWS = 10;
const int MAX_COLS = 10;

void readDataFromFile(int data[MAX_ROWS][MAX_COLS], int& numRows);
int findInteger(const int data[MAX_ROWS][MAX_COLS], int numRows, int target);
int modifyInteger(int data[MAX_ROWS][MAX_COLS], int numRows, int index, int newValue);
void addInteger(int data[MAX_ROWS][MAX_COLS], int& numRows, int newValue);
void replaceOrRemoveAtIndex(int data[MAX_ROWS][MAX_COLS], int& numRows, int index);

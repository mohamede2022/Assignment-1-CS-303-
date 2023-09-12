# Assignment-1-CS-303-

**Initialization:**
- The code starts by declaring a 2D array dataArray to store integers, and it initializes numRows to 0.
- It also sets a default filename as "data.txt" for reading data from a file.
- choice is initialized to 1 to enter the main menu loop.
**Main Menu**:
- The program enters a loop where you are presented with a menu of options.
- You can choose from the following options:
**Option 1: Check if an Integer Exists:**
- If you choose option 1, you will be prompted to enter an integer (target) to check if it exists in the array.
- The program will then search for the integer in the array using the findInteger function and display whether it was found and its index if found.
**Option 2: Modify an Integer:**
- If you choose option 2, you will be prompted to enter the index (modifyIndex) of the integer you want to modify and the new value (newValue) you want to set.
- The program will use the modifyInteger function to change the value at the specified index and display the old and new values.
**Option 3: Add an Integer:**
- If you choose option 3, you will be prompted to enter a new integer (newInt) to add to the end of the array.
- The program will use the addInteger function to append the new integer to the array.
**Option 4: Replace with 0 or Delete:**
- If you choose option 4, you will be asked if you want to replace an integer in the array with 0 (r to replace) or delete an integer (d to delete) altogether.
- Depending on your choice, it will either use the replaceOrRemoveAtIndex function to set the value at a specified index to 0 or simply remove the value.
**Option 5: Quit:**
- If you choose option 5, the program will exit the loop and terminate.
**Error Handling:**
- The code includes error handling using try-catch blocks. If any issues occur during file reading, array manipulation, or input validation, error messages will be displayed.

**Running the code:**
To run the code, compile it using a C++ compiler, provide a "data.txt" file with integers like a provided in my repository, and interact with the program through the menu options to perform various operations on the array of integers.


Here are some of the outputs of the diffrent options used to perform operations on the array:
<img width="1728" alt="Screenshot 2023-09-11 at 9 13 10 PM" src="https://github.com/mohamede2022/Assignment-1-CS-303-/assets/113187159/241baf4a-af62-4e16-8dec-f2f723121f94">

<img width="1725" alt="Screenshot 2023-09-11 at 11 05 43 PM" src="https://github.com/mohamede2022/Assignment-1-CS-303-/assets/113187159/1c099c7d-b806-471c-8622-34d8dc1bf195">


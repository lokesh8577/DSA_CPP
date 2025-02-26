#include <iostream>
using namespace std;

int main() {
    char start = 65; // The first number to start each row
    
    // Loop through the rows
    for (int i = 1; i <= 4; i++) {
        // In each row, print the numbers starting from 'start' and print 'i' numbers
        for (int j = 0; j < i; j++) {
            cout << char(start + j); // Print the number starting from 'start'
        }
        cout << endl; // Move to the next line after each row
        start++; // Increment the starting number for the next row
    }
    
    return 0;
}

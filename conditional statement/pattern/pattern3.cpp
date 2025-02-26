#include <iostream>
using namespace std;

int main() {
    int number = 1; // Start with number 1
    
    // Outer loop for 3 rows
    for(int i = 0; i < 3; i++) {
        // Inner loop for printing 3 numbers in each row
        for(int j = 0; j < 3; j++) {
            cout << number; // Print the current number
            number++; // Increment the number
        }
        cout << endl; // Move to the next line after each row
    }
    
    return 0;
}

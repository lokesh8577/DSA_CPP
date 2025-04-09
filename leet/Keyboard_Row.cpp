#include <iostream>
#include <string>
#include <vector>
using namespace std;

// Function to check if all characters in a word belong to a specific row
bool checkCharacters(const string& word, const string& row) {
    for (char ch : word) {
        ch = tolower(ch); // Convert to lowercase
        if (row.find(ch) == string::npos) {
            return false; // Character not found in the row
        }
    }
    return true; // All characters are in the row
}

// Function to find words that can be typed using one keyboard row
vector<string> findWords(vector<string>& words) {
    vector<string> ans;
    const string first_row = "qwertyuiop";
    const string second_row = "asdfghjkl";
    const string third_row = "zxcvbnm";

    for (const string& word : words) {
        if (checkCharacters(word, first_row) || 
            checkCharacters(word, second_row) || 
            checkCharacters(word, third_row)) {
            ans.push_back(word); // Add word if it matches any row
        }
    }

    return ans;
}

int main() {
    // Input words
    string words_array[] = {"hello", "alaska", "dad", "peace"};
    vector<string> words(words_array, words_array + sizeof(words_array) / sizeof(words_array[0]));

    // Find words that can be typed on one row
    vector<string> result = findWords(words);

    // Output result
    for (const string& word : result) {
        cout << word << " ";
    }

    return 0;
}


#include <iostream>
using namespace std;


string reverse(string s) {
    string result;
    for (int i = s.length() - 1; i >= 0; i--) {
        if (isalnum(s[i])) {
            result.push_back(s[i]);
        }
        else{
            result.push_back(' ');
        }
    }
    return result;
}

int main() {
    string s;
    cout << "Enter your string: " << endl;
    getline(cin, s); // Use getline to capture the full input, including spaces
    cout << "Original string: " << s << endl;
    cout << "Reversed string (alphanumeric + spaces): " << reverse(s) << endl;
    return 0;
}

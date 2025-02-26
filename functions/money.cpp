#include <iostream>
using namespace std;

int main() {
    int Money;
    cout << "Enter Amount: ";
    cin >> Money;

    int i = 1;  // Start from the largest denomination

    while (Money > 0) {
        switch (i) {
            case 1:
                if (Money >= 1000) {
                    cout << "1000 = " << Money / 1000 << endl;
                    Money %= 1000;
                }
                i++;  // Move to the next denomination
                break;

            case 2:
                if (Money >= 100) {
                    cout << "100 = " << Money / 100 << endl;
                    Money %= 100;
                }
                i++;
                break;

            case 3:
                if (Money >= 10) {
                    cout << "10 = " << Money / 10 << endl;
                    Money %= 10;
                }
                i++;
                break;

            case 4:
                if (Money >= 1) {
                    cout << "1 = " << Money / 1 << endl;
                    Money %= 1;
                }
                i++;
                break;

            default:
                Money = 0;  // End the loop if all cases are processed
        }
    }

    return 0;
}

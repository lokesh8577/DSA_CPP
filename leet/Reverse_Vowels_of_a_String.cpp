#include<iostream>
using namespace std;
bool isvowel(char s){
    s  = tolower(s);
    if(s == 'a' ||
     s == 'e' ||
     s == 'i' ||
     s == 'o' ||
     s == 'u'){
        return true;
    }
    return false;
}
string reverseVowels(string s) {
    int start = 0;
    int end = s.length()-1;
    while (start < end) {
        while (start < end && !isvowel(s[start])) {
            start++;
        }

        while (start < end && !isvowel(s[end])) {
            end--;
        }

        if (start < end) {
            swap(s[start], s[end]);
            start++;
            end--;
        }
    }
    return s;

}
int main(){
    string s = "hello";
    cout<<reverseVowels(s)<<endl;
    return 0;

}
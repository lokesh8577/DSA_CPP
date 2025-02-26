#include<iostream>
#include<string>
using namespace std;
bool isPalindrome(string s) {
    string new_string;
   for (int i = 0; i < s.size(); i++) {
         if (isalnum(s[i])) {
             new_string.push_back(tolower(s[i]));
         }
     }
    int start=0;
    int end=new_string.size()-1;
    while(start<=end){
     if(new_string[start]!=new_string[end]){
         return false;
     }
      start++;
      end--;
    }
    return true;


 
 }
int main(){
    string s;
    cout<<"enter you string"<<endl;;
    cin>>s;
    cout<<"is string palindrome "<<isPalindrome(s)<<endl;
    return 0;
} 
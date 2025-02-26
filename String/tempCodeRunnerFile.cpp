#include<iostream>
using namespace std;
int reverse(string s){
    string s1;
    for(int i = s.length()-1; i >= 0; i--){
        if(isalnum(s[i])){
            s1.push_back(s[i]);
        }
        else{
            s1.push_back(' ');
        }
    }
    return s1;
}
int main(){
    string s;
    cout<<"enter your strign "<<endl;
    cin>>s;
    cout<<"your string is "<<s<<endl;
    cout<<"your string is "<<reverse(s)<<endl;
    return 0;
}
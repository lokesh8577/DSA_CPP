#include<iostream>
using namespace std;
//global variable 
int supra = 10;
void print(){
    cout<<supra<<endl;
    supra++;
}
int main(){
    print();
    cout<<supra<<endl;
    print();
    return 0;
}
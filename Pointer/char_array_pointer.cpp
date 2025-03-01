#include<iostream>
using namespace std;
int main(){
    char ch[10]="heysurpai";
    cout<<ch<<endl;

    char *ptr = &ch[0];
    cout<<ptr<<endl;
    
    cout<<ptr+4<<endl;
    return 0;
}
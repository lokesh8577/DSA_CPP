#include<iostream>
using namespace std;
int main(){
    char number= 65;
    for(int i = 0; i<4;i++){
        for(int j=0;j<i;j++){
            cout<<char(number);
            number++;
        }
        cout<<endl;
    }
    return 0;
}
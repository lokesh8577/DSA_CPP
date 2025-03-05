#include<iostream>
using namespace std;
int main(){
    int val =10;
    int *ptr = &val;
    cout<<"Address of val: "<<&val<<endl;
    cout<<"Address of val: "<<ptr<<endl;
    cout<<"Address of ptr: "<<&ptr<<endl;
    int **ptr2 = &ptr;
    cout<<"value of ptr: "<<*ptr2<<endl;
    cout<<"Address of ptr: "<<ptr2<<endl;
    cout<<**ptr2<<endl;
    return 0;   
}
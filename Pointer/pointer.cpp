#include<iostream>
using namespace std;
int main(){
    int a=0;
    int *ptr =&a;
    *ptr = 10;
    double b =10;
    double *ptr2 = &b;
    (*ptr2)++;
    cout<<a<<endl;
    cout<<sizeof(a)<<endl;
    cout<<sizeof(ptr)<<endl;
    cout<<sizeof(ptr2)<<endl;
    cout<<*ptr2<<endl;
    cout<<b<<endl;
    cout<<ptr<<endl;
    ptr = ptr +1;
    cout<<ptr<<endl;
    return 0;
}
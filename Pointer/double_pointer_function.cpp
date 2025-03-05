#include<iostream>
using namespace std;
void update(int **p){
    // p=p+1;
    // *p=*p+1;
    **p = **p+1;
}
int main(){
    int a=10;
    int *p=&a;
    int **p1 = &p;
    cout<<a<<endl;;
    update(p1);
    cout<<a<<endl;
    return 0;
}
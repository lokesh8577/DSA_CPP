#include<iostream>
#include<math.h>
using namespace std;
int power(int x,int y){
return pow(x,y);
}
int main(){
    int x,y;
    cin>>x>>y;
    cout<<"the power of"<<x<<"and"<<y<<"= "<<power(x,y);
    return 0;
}
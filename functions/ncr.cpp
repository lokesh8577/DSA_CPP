#include<iostream>
#include<math.h>
using namespace std;
int facto(int n){
    int fact=1;
for(int i=1;i<=n;i++){
    fact *= i;
}
return fact;
}
float NCR(int n,int r){
return facto(n)/(facto(r)*facto(n-r));
}
int main(){
cout<<NCR(5,2);
return 0;
}


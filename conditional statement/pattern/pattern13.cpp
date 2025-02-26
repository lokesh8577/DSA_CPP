#include<iostream>
using namespace std;
int main(){
for(int i=3;i>=0;i--){
char number = 65;
    for(int j=i;j<=3;j++){
      cout<<char(number+i);
      number++;
    }
    cout<<endl;
}
return 0;
}
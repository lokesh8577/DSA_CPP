#include<iostream>
using namespace std;
bool isPowerOfFour(int n) {
    n = abs(n);
    int s=0;
    int e=n;
    int mid=s+(e-s)/2;
    while(s<=e){
        cout<<"loop is running"<<endl;
     int number = pow(mid , 4);
     if(number == n){
         return true;
     }
     else if(number > mid){
         e = mid -1;
     }
     else{
         s = mid + 1;
     }
     mid=s+(e-s)/2;
    }
 return false;
 }
 int main(){
    int n;
    cin>>n;
    if(isPowerOfFour(n)){
        cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
            }
            return 0;
 }

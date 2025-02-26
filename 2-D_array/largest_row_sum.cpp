#include<iostream>
using namespace std;
int main(){
    int arr[3][3]={1,2,3,4,5,6,7,8,9};
    int maxi = INT_MIN;
    for(int i=0;i<3;i++){
        int sum=0;
        for(int j=0;j<3;j++){
            sum=sum+arr[i][j];
        }
        if(sum>maxi){
            maxi=sum;
        }
        cout<<endl;
    }
    cout<<"largest sum row is "<<maxi<<endl;
    return 0;
}
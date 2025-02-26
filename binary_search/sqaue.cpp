#include<iostream>
using namespace std;
long long int squreInt(int n){
        int s=0;
        int e=n;
        long long int mid=s+(e-s)/2;
        long long int ans=-1;
        
        while(s<=e){
            long long int squre =mid*mid;
            if(squre==n){
                return mid;
            }
            if(squre<n){
                ans=mid;
                s=mid+1;
            }
            else{
                e=mid-1;
            }
            mid=s+(e-s)/2;
        }
        return ans;
}
double MorePrecision(int n,int precision,int tempsol){
    double factor=1;
    double ans= tempsol;
    for(int i=0;i<precision;i++){
        factor/=10;
        for(double j=ans;j*j<n;j+=factor){
            ans=j;
        }
    }
    return ans;

}
int main(){
int n;
cout<<"Enter a number : "<<endl;
cin>>n;
int tempsol=squreInt(n);

cout<<"answer is "<<MorePrecision(n,3,tempsol)<<endl;
return 0;
}
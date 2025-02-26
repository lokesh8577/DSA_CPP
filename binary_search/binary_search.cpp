#include<iostream>
using namespace std;
int main(){
    int arr[5]={10,20,30,40,50};
    int item,up=4,down=0,f=0,mid;
    cout<<"Enter the item to be searched: ";
    cin>>item;
    while(down<=up){
        mid=up + (down - up)/2;
        if(arr[mid]==item){
            f=1;
            break;
    }
    if(arr[mid]<item){
        down=mid+1;
    }
    else{
        up=mid-1;
        }
        }
        if(f==1){
            cout<<"item found at index:"<<mid;
            }
            else{
                cout<<"item not found";
                }
                return 0;
}
#include<iostream>
using namespace std;
int main(){
    //2d array
    int m,n;
    cout<<"Enter the number of rows: ";
    cin>>m;
    cout<<"Enter the number of columns: ";
    cin>>n;
    int** arr= new int*[m];
    for(int i=0;i<m;i++){
        arr[i]=new int[n];
    }
    //taking input
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            cin>>arr[i][j];
    }
    }
//printing the array
for(int i=0;i<m;i++){
    for(int j=0;j<n;j++){
        cout<<arr[i][j]<<" ";
}
cout<<endl;
}
for (int i = 0; i < m; i++) {
    delete[] arr[i];
}
delete[] arr;

    return 0;
}
#include<iostream>
using namespace std;
bool searchMatrix(int matrix[][3], int target) {
    //First method time complexity will be 0(mn)
//    for(int i=0;i<matrix.size();i++){
//     for(int j=0;j<matrix[i].size();j++){
//         if(matrix[i][j]==target){
//             return true;
//         }
//     }
//    } 
//    return false;

//second method using binary search
// int row=matrix.size();
// int col=matrix[0].size();
int row = 2;
int col = 3;

int start = 0;
int end = (row*col)-1;
int mid = start + (end-start)/2;
while(start<=end){
    int element = matrix[mid/col][mid%col];
    if(element==target){
        return 1;
    }
    else if(element>target){
        end = mid-1;
    }
    else{
        start = mid+1;
    }
    mid = start + (end-start)/2;
}
return 0;
}
int main(){
    int matrix[2][3] = {{1,3,5},{7,9,2}};
    int target = 5;
    cout<<searchMatrix(matrix,target)<<endl;
    return 0;
}

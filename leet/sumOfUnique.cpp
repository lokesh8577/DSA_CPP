#include<iostream>
using namespace std;
int sumOfUnique(int* arr,int n){
    unordered_map<int, int> freq; 
    int sum = 0;

    for (int i = 0; i < n; i++) {
        freq[arr[i]]++;
    }

    for (auto& pair : freq) {
        if (pair.second == 1) {
            sum += pair.first;
        }
    }

    return sum;
}
int main(){
    int arr[4]={1,2,2,3};
    cout<<sumOfUnique(arr,4);
    return 0;
}
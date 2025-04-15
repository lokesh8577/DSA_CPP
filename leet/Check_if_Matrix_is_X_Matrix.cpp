#include<iostream>
using namespace std;
bool checkXMatrix(vector<vector<int>>& grid) {
    int n = grid[0].size();
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                if (i == j || i + j == n - 1) {
                    if (grid[i][j] == 0) {
                        return false;
                    }
                } else {
                    if (grid[i][j] != 0) {
                        return false;
                    }
                }
            }
        }
        return true;

}
int main(){
    vector<vector<int>> grid = {{5,1,9,11},{2,4,
        8,10},{13,3,6,7},{15,14,16,
            12}};
            cout<<checkXMatrix(grid)<<endl;
            return 0;

}
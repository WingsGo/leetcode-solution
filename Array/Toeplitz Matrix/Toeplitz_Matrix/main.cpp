// 解题思路：双重循环遍历每个下标大于1的元素并与左上角元素进行对比


#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    bool isToeplitzMatrix(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int col = matrix[0].size();
        for(int i=1; i<row; i++){
            for(int j=1; j<col; j++){
                if(matrix[i][j] != matrix[i-1][j-1]){
                    return false;
                }
            }
        }
        return true;
    }
};

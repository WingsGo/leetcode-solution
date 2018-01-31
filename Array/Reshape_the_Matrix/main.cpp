#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<vector<int>> matrixReshape(vector<vector<int>>& nums, int r, int c) {
        int origin_row = nums.size();
        int origin_col = nums[0].size();
        if(origin_col * origin_row != r * c){
            return nums;
        }

        vector<vector<int>> reshape_matrix(r, vector<int>(c, 0));

        for(int i=0; i<origin_row; i++){
            for(int j=0; j<origin_col; j++){
                int k = i * origin_col + j;
                reshape_matrix[k/c][k%c] = nums[i][j];
            }
        }
        return reshape_matrix;
    }
};

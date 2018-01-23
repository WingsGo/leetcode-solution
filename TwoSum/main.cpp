#include <vector>
#include <iostream>
using namespace std;

class Solution {
public:
    vector<int> twoSum(vector<int>& nums, int target) {
        for(auto it = nums.begin(); it != nums.end(); it++){
            for(int idx = it - nums.begin() + 1; idx < nums.size(); idx++){
                if(*it + nums.at(idx) == target){
                    return vector<int>{it - nums.begin(), idx};
                }
            }
        }
    }
};

int main(int argc, char *argv[])
{
    vector<int> test{-1,-2,-3,-4,-5};
    Solution s;
    auto result = s.twoSum(test, -8);
    cout << result.at(0) << result.at(1) << endl;
    getchar();
    return 0;
}

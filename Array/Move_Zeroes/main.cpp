#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int j = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i] != 0){
                nums[j++] = nums[i];
            }
        }
        for(int i=j; i<nums.size(); i++){
            nums[i] = 0;
        }
    }
};

int main(int argc, char *argv[])
{
    vector<int> a{0,1,2,5,4,0,0,2,5,7};
    Solution s;
    s.moveZeroes(a);
    auto b = a;
    return 0;
}

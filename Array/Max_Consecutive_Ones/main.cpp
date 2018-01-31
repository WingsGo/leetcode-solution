#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
        int max = 0; int times = 0;
        for(int i=0; i<nums.size(); i++){
            if(nums[i]&1){
                max = max>++times?max:++times;
            }
            else{
                times = 0;
            }
        }
        return max;
    }
};

int main(int argc, char *argv[])
{
    vector<int> a{0,1,0,1,1,1,0,0,1};
    Solution s;
    cout << s.findMaxConsecutiveOnes(a);
    return 0;
}

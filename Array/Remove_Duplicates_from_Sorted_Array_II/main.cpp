#include <iostream>
#include <vector>

using namespace std;

class Solution
{
public:
    int removeDuplicates(vector<int> &nums) {
        if (nums.size() < 2)
            return nums.size();
        int j = 0;
        int times = 0;
        for(int i=1; i<nums.size(); i++) {
            if (nums[i] == nums[j]) {
                times++;
                if (times < 2)
                    nums[++j] = nums[i];
                else
                    continue;
            }
            else {
                nums[++j] = nums[i];
                times = 0;
            }
        }
        return j+1;
    }
};

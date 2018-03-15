#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int removeDuplicates(vector<int>& nums) {
        if (nums.size() < 2)
            return nums.size();
        int j = 0;
        for(int i=1; i<nums.size(); i++) {
            if (nums[i] == nums[j])
                continue;
            nums[++j] = nums[i];
        }
        return j + 1;
    }
};

int main(int argc, char *argv[])
{
    vector<int> a = {1, 1, 2};
    Solution s;
    s.removeDuplicates(a);
    cout << "Hello World!" << endl;
    return 0;
}

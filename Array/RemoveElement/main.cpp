#include <vector>
#include <iostream>

using namespace std;

class Solution {
public:
    int removeElement(vector<int>& nums, int val) {
        int j = 0;
        for (int i=0; i<nums.size(); i++) {
            if (nums[i] == val)
                continue;
            nums[j] = nums[i];
            j++;
        }
        return j;
    }
};

int main(int argc, char *argv[]) {
    Solution s;
    vector<int> a = {3, 2, 2, 3};
    s.removeElement(a, 2);
    for(vector<int>::iterator it=a.begin(); it!=a.end(); it++)
        cout << *it;
}

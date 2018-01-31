#include <iostream>
#include <vector>
#include <set>

using namespace std;

class Solution {
public:
    vector<int> findDisappearedNumbers(vector<int>& nums) {
        set<int> appear_nums;
        vector<int> res;
        for(auto num:nums){
            appear_nums.insert(num);
        }
        for(int i=1; i<nums.size() + 1; i++){
            if(appear_nums.find(i) == appear_nums.end()){
                res.push_back(i);
            }
        }
        return res;
    }
};

int main(int argc, char *argv[])
{
    vector<int> a{1,1,5,5,7,4,4,4};
    Solution s;
    auto c = s.findDisappearedNumbers(a);
    return 0;
}

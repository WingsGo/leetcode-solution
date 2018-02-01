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

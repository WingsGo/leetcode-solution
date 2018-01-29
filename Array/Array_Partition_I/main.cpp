#include <iostream>
#include <vector>
using namespace std;


// 思路：利用快排将数组进行排序，然后将排序好的数组的奇数项累计相加


class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        quickSort(nums, 0, nums.size() - 1);
        int result = 0;
        for(vector<int>::iterator it = nums.begin(); it != nums.end(); it += 2){
            result += *it;
        }
        return result;
    }

    void quickSort(vector<int>& nums, int start, int end){
        if(start > end){
            return;
        }
        int left = start;
        int right = end;
        int key = nums[left];

        while(left < right){
            while(left < right && nums[right] >= key){
                --right;
            }
            nums[left] = nums[right];
            while (left < right && nums[left] <= key) {
                ++left;
            }
            nums[right] = nums[left];
        }
        nums[left] = key;
        quickSort(nums, start, left - 1);
        quickSort(nums, left + 1, end);
    }
};

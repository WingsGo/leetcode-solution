#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int findKthLargest(vector<int>& nums, int k) {
        quicksort(nums, 0, nums.size() - 1);
        return nums[k-1];
    }

    void quicksort(vector<int> &input_array, int start, int end) {
        if(start < end){
            int left = start;
            int right = end;
            int key = input_array[left];
            while (left < right) {
                while (left < right && input_array[right] <= key) {
                    --right;
                }
                input_array[left] = input_array[right];
                while (left < right && input_array[left] >= key) {
                    ++left;
                }
                input_array[right] = input_array[left];
            }
            input_array[left] = key;
            quicksort(input_array, start, left - 1);
            quicksort(input_array, left + 1, end);
        }
    }
};

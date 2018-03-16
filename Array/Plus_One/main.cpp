#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    vector<int> plusOne(vector<int>& digits) {
        int add_num = 1;
        for (int i=digits.size() - 1; i>=0; i--) {
            int res = digits[i] + add_num;
            add_num = res / 10;
            digits[i] = res % 10;
        }
        if (add_num == 1) {
            digits.insert(digits.begin(), 1);
        }
        return digits;
    }
};

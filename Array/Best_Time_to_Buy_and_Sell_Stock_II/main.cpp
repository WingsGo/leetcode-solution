#include <iostream>
#include <vector>

using namespace std;

class Solution {
public:
    int maxProfit(vector<int>& prices) {
        int siz = prices.size();
        if (siz == 0) {
            return 0;
        }
        else if (siz == 1) {
            return prices[0];
        }
        else {
            int res = 0;
            for(int i=0; i<siz - 1; ++i) {
                if (prices[i] < prices[i+1]) {
                    res += prices[i+1] - prices[i];
                }
            }
            return res;
        }
    }
};

int main(int argc, char *argv[])

{
    vector<int> a{1};
    Solution s;
    cout << s.maxProfit(a);
    return 0;
}

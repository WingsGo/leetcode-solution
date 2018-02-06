#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

// 初级的DP问题，每一步的最优解从上一步和上两步的状态推断出，那么只需要求出前一步
// 和前两步之间的最小值即为当前的局部最优解，局部最优解一直叠加就可以获得全局最优解

class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int siz = cost.size();
       int costed[1000];
       costed[0] = 0;
       costed[1] = 0;
       for (size_t i=2; i<siz; i++) {
           costed[i] = std::min(cost[i - 1] + costed[i - 1], cost[i - 2] + costed[i - 2]);
       }
       return std::min(cost[siz - 1] + costed[siz - 1], cost[siz - 2] + costed[siz - 2]);
    }
};

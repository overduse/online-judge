#include <cmath>
class Solution {
public:
    int minCostClimbingStairs(vector<int>& cost) {
        int n = cost.size();
        int dp[1010] = {0};
        for(int i=2; i<=n; i++) {
            dp[i] = min(dp[i-2]+cost[i-2], dp[i-1]+cost[i-1]);
        }
        return dp[n];
    }
};

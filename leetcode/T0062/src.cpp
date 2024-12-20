#define MAXN 110
class Solution {
public:
    int uniquePaths(int m, int n) {
        int dp[MAXN][MAXN]={0};
        // init dp matrix
        for(int i=0; i<n; i++) dp[0][i]=1;
        for(int i=1; i<n; i++) dp[i][0]=1;

        for(int i=1; i<m; i++) {
            for(int j=1; j<n; j++) {
                dp[i][j] = dp[i][j-1] + dp[i-1][j];
            }
        }
        int ret = dp[m-1][n-1];
        return ret;
    }
};

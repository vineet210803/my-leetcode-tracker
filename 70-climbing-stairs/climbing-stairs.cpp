class Solution {
public:

    int sol(int n, int i, vector<int>& dp){
        if(i==n)return 1;
        if(i>n)return 0;
        if(dp[i]!=-1)return dp[i];

        return dp[i]=sol(n, i+1, dp)+sol(n, i+2, dp);

    }

    int climbStairs(int n) {
        int cnt=0;
        int i=0;
        vector<int>dp(n+1,-1);
        return sol(n, i, dp);
    }
};
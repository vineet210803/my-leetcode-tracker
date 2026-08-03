class Solution {
public:
    int n;

    int sol(vector<int>& v, int i, vector<int>& dp) {
        if (i >= n) {
            return 0;
        }
        if(dp[i]!=-1) return dp[i];
        int result = v[i] - sol(v, i + 1, dp);
        if (i + 1 < n)
            result = max(result, v[i] + v[i + 1] - sol(v, i + 2, dp));
        if (i + 2 < n)
            result = max(result, v[i] + v[i + 1] + v[i + 2] - sol(v, i + 3, dp));
        return dp[i]= result;
    }

    string stoneGameIII(vector<int>& v) {
        n = v.size();
        vector<int>dp(n+3, -1);
        int ans = sol(v, 0, dp);
        if (ans > 0) {
            return "Alice";
        } else if (ans < 0) {
            return "Bob";
        } else {
            return "Tie";
        }
    }
};
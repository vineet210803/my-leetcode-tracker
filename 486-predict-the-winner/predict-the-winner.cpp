class Solution {
public:
    int sol(vector<int>& v, int l, int r, vector<vector<int>>& dp) {
        if (l == r) {
            return v[l];
        }
        if(dp[l][r]!=-1) return dp[l][r];
        int left = v[l] - sol(v, l + 1, r, dp);
        int right = v[r] - sol(v, l, r - 1, dp);
        return dp[l][r]= max(left, right);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n=nums.size();
        vector<vector<int>>dp(n, vector<int>(n,-1));
        int l = 0;
        int r = nums.size() - 1;
        return sol(nums, l, r, dp) >= 0;
    }
};
class Solution {
public:
    int sol(vector<int>& v, int l, int r, vector<vector<int>>& dp) {
        if (l > r)
            return 0;
        if (l == r) {
            return v[l];
        }
        if(dp[l][r]!=-1) return dp[l][r];
        int a = v[l] + min(sol(v, l + 2, r, dp), sol(v, l + 1, r - 1, dp));
        int b = v[r] + min(sol(v, l + 1, r - 1, dp), sol(v, l, r - 2, dp));
        return dp[l][r]= max(a,b);
    }

    bool predictTheWinner(vector<int>& nums) {
        int n = nums.size();
        int sum=0;
        for(auto it:nums){
            sum+=it;
            
        }
        vector<vector<int>> dp(n, vector<int>(n, -1));
        int s1=sol(nums, 0, n-1, dp);
        int s2=sum-s1;
        return s1>=s2;
    }
};
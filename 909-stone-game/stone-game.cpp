class Solution {
public:

    int sol(vector<int>& v, int l, int r, vector<vector<int>>& dp){
        if(l==r){
            return v[l];
        }
        if(l>r){
            return 0;
        }
        if(dp[l][r]!=-1) return dp[l][r];

        int a= v[l]+min(sol(v, l+1, r-1, dp), sol(v, l+2, r, dp));
        int b= v[r]+min(sol(v, l+1, r-1, dp), sol(v, l, r-2, dp));
        return dp[l][r] = max(a,b);
    }

    bool stoneGame(vector<int>& v) {
        int n=v.size();
        vector<vector<int>>dp(n, vector<int>(n, -1));
        int sum=0;
        for(int i=0; i<n; i++){
            sum+=v[i];
        }
        int alice= sol(v, 0, n-1 , dp);
        int bob= sum-alice;
        return alice>=bob;
    }
};
class Solution {
public:

    int sol(vector<int>& v, int n, int i, int buy, vector<vector<int>>& dp){

        if(i>=n){
            return 0;
        }
        if(dp[i][buy]!=-1) return dp[i][buy];

        int profit=0;
        if(buy==1){
            profit=max((-v[i]+sol(v,n,i+1,0, dp)),(0+sol(v,n,i+1,1, dp)));
        }else{
            profit=max((v[i]+sol(v,n,i+2,1, dp)),(0+sol(v,n,i+1, 0, dp)));
        }
        return dp[i][buy]= profit;

    }

    int maxProfit(vector<int>& v) {
        int n=v.size();
        vector<vector<int>>dp(n+1, vector<int>(2, -1));
        int ans=sol(v, n, 0, 1, dp);
        return ans;
    }
};
class Solution {
public:
    int maxProfit(vector<int>& v) {
        int n=v.size();
        int mini=INT_MAX;
        int pro=0;
        int ans=0;
        for(int i=0; i<n; i++){
            mini=min(mini, v[i]);
            pro=v[i]-mini;
            if(pro>0){
                ans+=pro;
                mini=v[i];
            }
        }
        return ans;
    }
};
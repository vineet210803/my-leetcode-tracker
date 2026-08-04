class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mini=INT_MAX;
        int pro=0;
        int ans =0;
        for(int i=0; i<v.size(); i++){
            mini=min(mini,v[i]);
            pro=v[i]-mini;
            ans=max(ans, pro);
        }
        return ans;
    }
};
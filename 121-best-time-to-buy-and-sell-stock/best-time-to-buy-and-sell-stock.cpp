class Solution {
public:
    int maxProfit(vector<int>& v) {
        int mini=INT_MAX;
        int ans=0;
        for(auto it: v){
            if(it<mini){
                mini=it;
            }
            int diff=it-mini;
            ans=max(ans,diff);
        }
        return ans;
        
    }
};
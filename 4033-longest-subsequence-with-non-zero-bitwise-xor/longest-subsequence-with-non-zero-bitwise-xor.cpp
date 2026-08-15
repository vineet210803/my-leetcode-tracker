class Solution {
public:
    int longestSubsequence(vector<int>& v) {
        int n=v.size();
        int tot=0;
        int maxi=n-1;
        int mini=0;
        bool flag=true;
        for(int i=0; i<n; i++){
            if(v[i]!=0){
                flag=false;
                mini=min(mini,i);
                maxi=max(maxi,i);
            }
            tot=tot^v[i];
        }
            if(flag){
                return 0;
            }
        if(tot!=0){
            return n;
        }
        return max((n-mini-1), maxi);
    }
};
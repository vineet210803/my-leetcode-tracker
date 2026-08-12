class Solution {
public:
    int maxSubarrayLength(vector<int>& v, int k) {
        int n=v.size();
        int i=0;
        int j=0;
        int ans=0;
        unordered_map<int,int>mpp;
        while(j<n && i<=j){
            mpp[v[j]]++;
            while(mpp[v[j]]>k){
                mpp[v[i]]--;
                i++;
                continue;
            }
                int len=j-i+1;
                ans=max(ans,len);
                j++;
        }
        return ans;
    }
};
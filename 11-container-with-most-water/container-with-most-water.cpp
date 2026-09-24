class Solution {
public:
    int maxArea(vector<int>& v) {
        int l=0;
        int r=v.size()-1;
        int curr=0;
        int maxi=INT_MIN;
        while(l<=r){
            curr=min(v[l],v[r])*(r-l);
            maxi=max(maxi,curr);
            if(v[l]<v[r])l++;
            else r--;
        }
        return maxi;
    }
};
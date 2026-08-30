class Solution {
public:
    int minimumDeletions(vector<int>& v) {
        int n=v.size();
        int mini=INT_MAX;
        int maxi=INT_MIN;
        for(auto it:v){
            mini=min(mini,it);
            maxi=max(maxi,it);
        }
        int imin;
        int imax;
        for(int i=0; i<n; i++){
            if(v[i]==maxi) imax=i;
            if(v[i]==mini) imin=i;
        }
        int l=0;
        int r=0;
        l=min(imax,imin);
        r=max(imax,imin);
        cout<<l<<" "<<r;
        int a=n-l;
        int b=r+1;
        int c=l+1+(n-r);
        return min({a,b,c});
    }
};
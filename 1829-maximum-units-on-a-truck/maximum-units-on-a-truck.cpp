class Solution {
public:
    int maximumUnits(vector<vector<int>>& b, int s) {
        int ans=0;
        sort(b.begin(), b.end(),[]( const vector<int>&a, const vector<int>&b){
            return a[1]>b[1];
        });
        int i=0;
        while(s>0 && i<b.size()){
            if(b[i][0]<=s){
                ans+=b[i][0]*b[i][1];
            }else{
                ans+=s*(b[i][1]);
            }
                s-=b[i][0];
                i++;
        }
    return ans;
    }
};
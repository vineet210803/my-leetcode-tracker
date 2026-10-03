class Solution {
public:
    vector<int> rearrangeArray(vector<int>& nums) {
        int n=nums.size();
        vector<int>pos;
        vector<int>neg;
        for(auto it:nums){
            if(it>0) pos.push_back(it);
            else neg.push_back(it);
        }
        vector<int>ans;
        int x=0;
        int y=0;
        for(int i=0; i<n; i++){
            if(i%2==0){
                ans.push_back(pos[x]);
                x++;
            }else{
                ans.push_back(neg[y]);
                y++;
            }
        }
        return ans;
    }
};
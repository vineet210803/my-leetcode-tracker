class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int n=nums.size();
        int cnt=0;
        int num;
        for(auto it:nums){
            if(cnt==0) num=it;
            if(it==num){
                cnt++;
            }
            else{
                cnt--;
            }
        }
        return num;
    }
};
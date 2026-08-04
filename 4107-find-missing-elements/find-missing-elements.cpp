class Solution {
public:
    vector<int> findMissingElements(vector<int>& nums) {
        vector<int>ans;
        map<int,int>mpp;
        int maxi=INT_MIN;
        int mini=INT_MAX;
        for(int i=0; i<nums.size(); i++){
            mpp[nums[i]]++;
            maxi=max(maxi,nums[i]);
            mini=min(mini,nums[i]);
        }
        for(int i=mini; i<=maxi; i++){
            if(mpp[i]==0){
                ans.push_back(i);
            }
        }
        return ans;
    }
};
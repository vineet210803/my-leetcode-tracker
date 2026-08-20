class Solution {
public:
    vector<int> resultArray(vector<int>& nums) {
        int n =nums.size();
        vector<int>v1;
        vector<int>v2;
        v1.push_back(nums[0]);
        v2.push_back(nums[1]);
        for(int i=2; i<n; i++){
            if(v1.back()>v2.back()){
                v1.push_back(nums[i]);
            }else{
                v2.push_back(nums[i]);
            }
        }
        vector<int>res;
        for(auto it:v1){
            res.push_back(it);
        }
        for(auto it: v2){
            res.push_back(it);
        }
        return res;

    }
};
class Solution {
public:
    int fourSumCount(vector<int>& nums1, vector<int>& nums2, vector<int>& nums3, vector<int>& nums4) {
        int l1=nums1.size();
        int l2=nums2.size();
        int l3=nums3.size();
        int l4=nums4.size();
        unordered_map<int,int>mpp;
        int cnt=0;
        for(auto it1:nums1){
            for(auto it2:nums2){
                mpp[it1+it2]++;
            }
        }
        for(auto it3: nums3){
            for(auto it4:nums4){
                if(mpp.find(0-(it3+it4))!=mpp.end()){
                    cnt+=mpp[0-(it3+it4)];
                }
            }
        }
        return cnt;
    }
};
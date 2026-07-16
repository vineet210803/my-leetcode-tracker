class Solution {
public:
    long long gcdSum(vector<int>& nums) {
        int maxi=INT_MIN;
        vector<int>mx;
        for(auto it: nums){
            maxi=max(maxi, it);
            mx.push_back(maxi);
        }
        vector<int>pg;
        for(int i=0; i<nums.size(); i++){
            int num=__gcd(nums[i], mx[i]);
            pg.push_back(num);
        }
        sort(pg.begin(), pg.end());
        int i=0;
        int l=pg.size()-1;
        long long ans=0;
        while(i<l){
            long long pairs=__gcd(pg[i],pg[l]);
            ans+=pairs;
            i++;
            l--;
        }
        return ans;
    }
};
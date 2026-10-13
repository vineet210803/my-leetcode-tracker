class Solution {
public:
    long long maxAlternatingSum(vector<int>& nums) {
        int n=nums.size();
        for(int i=0; i<n; i++){
            nums[i]=abs(nums[i]);
        }
        sort(nums.begin(), nums.end());
        vector<int>temp;
        long long ans=0;
        int l=0;
        int r=n-1;
        for(int i=0; i<n; i++){
            if(i%2==0){
                temp.push_back(nums[r]);
                r--;
            }else{
                temp.push_back( nums[l]);
                l++;
            }
        }
        for(int i=0; i<n; i++){
            cout<<temp[i]<<" ";
            if(i%2==0){
                ans+=temp[i]*temp[i];
            }else{
                ans+= (temp[i]*temp[i])*(-1);
            }
        }
        return ans;
        
    }
};
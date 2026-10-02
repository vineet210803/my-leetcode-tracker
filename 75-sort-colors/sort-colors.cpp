class Solution {
public:
    void sortColors(vector<int>& nums) {
        int one=0;
        int two=0;
        int three=0;
        for(auto it:nums){
            if(it==0)one++;
            else if(it==1)two++;
            else three++;
        }
        int i=0;
        while(i<nums.size()){
            if(one>0){
                nums[i]=0;
                one--;
            }
            else if(two>0){
                nums[i]=1;
                two--;
            }
            else if(three>0){
                nums[i]=2;
                three--;
            }
            i++;
        }
    }
};
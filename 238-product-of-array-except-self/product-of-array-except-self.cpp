class Solution {
public:
    vector<int> productExceptSelf(vector<int>& nums) {
        int n=nums.size();
        vector<int>left(n,1);
        vector<int>right(n,1);
        for(int i=1; i<n; i++){
            left[i]=left[i-1]*nums[i-1];
        }
        for(int j=n-2; j>=0; j--){
           right[j]=right[j+1]*nums[j+1];
        }
        for(auto it: left){
            cout<<it<<" ";
        }
        cout<<endl;
        for(auto it: right){
            cout<<it<<" ";
        }
        cout<<endl;
        vector<int>ans;
        for(int i=0; i<n; i++){
            ans.push_back(left[i]*right[i]);
        }
        return ans;
    }
};

// i have used 2 extra array left and right (not required)
// try solving using only 1 array that is ans[] using this same approach;
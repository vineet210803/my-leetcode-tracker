class Solution {
public:

    void sol(vector<int>& v, vector<vector<int>>& ans, int l, int n){
        if(l==n){
            ans.push_back(v);
            return;
        }

        for(int i=l; i<n; i++){
            swap(v[l], v[i]);
            sol(v, ans, l+1, n);
            swap(v[l], v[i]);
        }

    }

        int n;
    vector<vector<int>> permute(vector<int>& nums) {
        vector<vector<int>>ans;
        n=nums.size();
        sol(nums, ans, 0, n);
        return ans;
    }
};
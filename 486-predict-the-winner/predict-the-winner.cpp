class Solution {
public:
    int sol(vector<int>& v, int l, int r) {
        if (l == r) {
            return v[l];
        }
        int left = v[l] - sol(v, l + 1, r);
        int right = v[r] - sol(v, l, r - 1);
        return max(left, right);
    }

    bool predictTheWinner(vector<int>& nums) {
        
        int l = 0;
        int r = nums.size() - 1;
        return sol(nums, l, r) >= 0;
    }
};
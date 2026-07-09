class Solution {
public:
    vector<bool> pathExistenceQueries(int n, vector<int>& nums, int maxDiff, vector<vector<int>>& queries) {
       vector<int> p(n);
        for (int i = 0; i < n; ++i) p[i] = i;
        auto f = [&](int x) {
            while (p[x] != x) {
                p[x] = p[p[x]];
                x = p[x];
            }
            return x;
        };
        for (int i = 0; i < n - 1; ++i) {
            if (nums[i + 1] - nums[i] <= maxDiff) {
                int u = f(i), v = f(i + 1);
                if (u != v) p[v] = u;
            }
        }
        vector<bool> ans;
        for (auto& v : queries) {
            ans.push_back(f(v[0]) == f(v[1]));
        }
        return ans;
    }
};
class Solution {
public:
    void sol(vector<int>& temp, vector<int>& v, vector<vector<int>>& ans,unordered_set<int>& st, int n ){
        if(temp.size()==n){
            ans.push_back(temp);
            return;
        }
        for(int i=0; i<n; i++){
            if(st.find(v[i])==st.end()){
                temp.push_back(v[i]);
                st.insert(v[i]);

                sol(temp, v, ans, st, n);
                temp.pop_back();
                st.erase(v[i]);
            }
        }
    }

    vector<vector<int>> permute(vector<int>& v) {
        vector<vector<int>> ans;
        int n=v.size();
        unordered_set<int>st;
        vector<int>temp;
        sol(temp, v, ans, st, n);
        return ans;  
    }
};
class Solution {
public:


    void dfs(int i, vector<vector<int>>&adj, vector<int>&vis){
        vis[i]=1;
        for(auto it: adj[i]){
            if(!vis[it]){
                dfs(it, adj, vis);
            }
        }

    }

    int findCircleNum(vector<vector<int>>& v) {
        int n=v.size();
        int cnt=0;
        vector<vector<int>>adj(n);
        for(int i=0; i<n; i++){
            for(int j=0; j<n; j++){
                if(v[i][j]==1 && i!=j){
                    adj[i].push_back(j);
                    adj[j].push_back(i);
                }
            }
        }
        vector<int>vis(n+1,0);
        for(int i=0; i<n; i++){
            if(vis[i]==0){
                dfs(i, adj, vis);
                cnt++;
            }
        }
        return cnt;
    }
};
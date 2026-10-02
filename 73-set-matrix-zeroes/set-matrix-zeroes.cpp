class Solution {
public:
    void setZeroes(vector<vector<int>>& v) {
        int m=v.size();
        int n=v[0].size();
        vector<int>row(m, 1);
        vector<int>col(n,1);
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(v[i][j]==0){
                    row[i]=0;
                    col[j]=0;
                }
            }
        }
        for(int i=0; i<m; i++){
            for(int j=0; j<n; j++){
                if(row[i]==0 || col[j]==0){
                    v[i][j]=0;
                }
            }
        }
    }
};
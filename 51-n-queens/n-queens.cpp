class Solution {
public:

    bool isSafe(int row, int col, vector<string> & temp, int n){

        int row1=row;
        int col1=col;
        while(row>=0 && col>=0 ){
            if(temp[row][col]=='Q') return false;
            row--;
            col--;
        }

        row=row1;
        col=col1;

        while(row>=0 && col>=0){
            if(temp[row][col]=='Q') return false;
            col--;
        }

        row=row1;
        col=col1;

        while(row<n && col>=0){
            if(temp[row][col]=='Q') return false;
            row++;
            col--;
        }

        return true;

    }



    void sol(vector<vector<string>> &ans, vector<string> &temp, int n, int col){
        if(col>=n){
            ans.push_back(temp);
            return ;
        }

        for(int row=0; row<n; row++){
            if(isSafe(row, col, temp, n)){
                temp[row][col]='Q';
                sol(ans, temp, n, col+1);
                temp[row][col]='.';
            }
        }
    }

    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>>ans;
        vector<string>temp;
        string s(n, '.');
        for(int i=0; i<n; i++){
            temp.push_back(s);
        }
        sol(ans, temp, n, 0);
        return ans;

    }
};
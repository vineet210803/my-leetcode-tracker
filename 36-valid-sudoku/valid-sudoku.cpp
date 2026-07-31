class Solution {
public:
        bool sol(vector<vector<char>>& v , int sr, int sc, int er, int ec){
            map<char, int>mpp;
            for(int i=sr; i<=er; i++){
                for(int j=sc; j<=ec; j++){
                    if(v[i][j]=='.') continue;
                    else{
                        if(mpp[v[i][j]]>0) return false;
                        else mpp[v[i][j]]++;
                    }
                }
            }
            return true;
        }
    bool isValidSudoku(vector<vector<char>>& v) {
        //for row
        for(int i=0; i<9; i++){
            map<char,int>mp1;
            for(int j=0; j<9; j++){
                if(v[i][j]=='.') continue;
                else{
                    if(mp1[v[i][j]]>0) return false;   
                    else mp1[v[i][j]]++;
                }
            }
        }
        //for col
        for(int j=0; j<9; j++){
            map<char,int>mp1;
            for(int i=0; i<9; i++){
                if(v[i][j]=='.') continue;
                else{
                    if(mp1[v[i][j]]>0) return false;   
                    else mp1[v[i][j]]++;
                }
            }
        }
        //for 3x3 grid
        for(int sr=0; sr<9; sr+=3){
                int er=sr+2;
            for(int sc=0; sc<9; sc+=3){
                int ec=sc+2;
                if(!sol(v, sr, sc, er, ec)){
                    return false;
                }
            }
        }
        return true;
    }
};
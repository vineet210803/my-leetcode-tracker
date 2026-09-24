class Solution {
public:

    void sol(vector<string> & ans, string s, int n, int up, int down){
        if(up<=0 && down<=0) {
            ans.push_back(s);
            return;
        }

        if(up>0){
            sol(ans, s+'(', n, up-1, down);
        }
        if(down>0 && down>up){
            sol(ans, s+')', n, up, down-1);
        }
    }

    vector<string> generateParenthesis(int n) {
        vector<string>ans;
        string s="";
        int up=n;
        int down=n;
        sol(ans,s, n, up,down );
        return ans;
    }
};
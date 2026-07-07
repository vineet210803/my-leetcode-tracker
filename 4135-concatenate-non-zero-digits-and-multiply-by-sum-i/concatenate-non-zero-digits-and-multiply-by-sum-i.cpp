class Solution {
public:
    long long sumAndMultiply(int n) {
       
        string s= to_string(n);
        string ans="";
        for(int i=0; i<(int)s.length(); i++){
            if(s[i]!='0'){
                ans+=s[i];
            }
        }
        if(ans.empty()){
            return 0;
        }
        int a = stoll(ans);
        long long val=0;
        for(int i=0; i<(int)ans.length(); i++){
            val+=ans[i]-'0';
        }
        long long res=a*val;
        return res;
    }
};
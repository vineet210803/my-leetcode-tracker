class Solution {
public:
    int numOfStrings(vector<string>& p, string w) {
        set<string>st;
        int n= w.length();
        for(int i=0; i<n; i++){
            string s="";
            for(int j=i; j<n; j++){
                s+=w[j];
                st.insert(s);
            }
        }
        int cnt=0;
        for(auto it: p){
                if(st.find(it)!=st.end()){
                    cnt++;
                    continue;
                }
        }
        return cnt;
    }
};
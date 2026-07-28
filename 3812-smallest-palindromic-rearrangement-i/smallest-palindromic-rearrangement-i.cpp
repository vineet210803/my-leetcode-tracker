class Solution {
public:
    string smallestPalindrome(string s) {
        map<char,int>mpp;
        for(auto it:s){
            mpp[it]++;
        }
        sort(s.begin(),s.end());
        string s1="";
        string s2="";
        int i=0;
        for(auto it:mpp){
            char c= it.first;
            int cnt=it.second;
            for(int j=0; j<cnt/2; j++){
                s1+=c;
            }
            if(cnt%2 !=0){
                s2+=c;
            }
        }
        string s3=s1;
        reverse(s3.begin(), s3.end());
        return s1+s2+s3;
    }
};
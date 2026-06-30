class Solution {
public:
    int numberOfSubstrings(string s) {
        int l=s.length();
        map<int,int>mpp;
        int i=0;
        int j=0;
        int cnt=0;
        while(j<l && i<=j){
            mpp[s[j]-'a']++;
            while(mpp[0]>0 && mpp[1]>0 && mpp[2]>0){
                cnt+=(l-j);
                mpp[s[i]-'a']--;
                i++;
            }
                j++;
        }
        return cnt;
    }
};
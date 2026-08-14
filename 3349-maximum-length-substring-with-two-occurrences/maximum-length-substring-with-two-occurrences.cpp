class Solution {
public:
    int maximumLengthSubstring(string s) {
        int n=s.length();
        int i=0;
        int j=0;
        int ans=0;
        unordered_map<int , int>mpp;
        
        while(j<n && i<=j){
            mpp[s[j]-'a']++;
            while(mpp[s[j]-'a']>2){
                mpp[s[i]-'a']--;
                i++;
            }
            int len=j-i+1;
            ans=max(ans,len);
            j++;
        }
        return ans;
        
    }
};
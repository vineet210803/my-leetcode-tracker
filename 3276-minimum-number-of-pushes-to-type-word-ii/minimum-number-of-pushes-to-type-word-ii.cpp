class Solution {
public:

    int minimumPushes(string s) {
        int n = s.length();
        vector<int>v(26,0);
        for(int i=0;i<n; i++){
            v[s[i]-'a']++;
        }
        sort(v.begin(), v.end(), greater<>());
        int ans=0;
        for(int i=0; i<v.size(); i++){
           ans+=(v[i]*((i/8)+1));
        }
        return ans;
    }
};
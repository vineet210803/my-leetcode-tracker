class Solution {
public:
    char findTheDifference(string s, string t) {
        unordered_map<int,int>mpp;
        for(auto it: t){
            mpp[it-'a']++;
        }
        for(auto it: s){
            mpp[it-'a']--;
        }
        for(auto it:mpp){
            if(it.second==1){
                return it.first+'a';
            }
        }
        return ' ';
    }
};
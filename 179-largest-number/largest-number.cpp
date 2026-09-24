class Solution {
public:
    string largestNumber(vector<int>& nums) {
        vector<string > v;
        for(auto it:nums){
            string s= to_string(it);
            v.push_back(s);
        }
        sort(v.begin(), v.end(), [](const string &a, const string & b){
            return (a+b)>(b+a);
        });

        string ans="";
        if(v[0]=="0") return "0";
        
        for(auto it:v){
            ans+=it;
        }
        return ans;

    }
};
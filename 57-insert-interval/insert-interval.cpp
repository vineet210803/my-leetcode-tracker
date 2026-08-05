class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& v, vector<int>& n) {
        vector<vector<int>>ans;
        vector<int> temp(2);
        map<int,int>mpp;
        for(auto it: v){
            mpp[it[0]]-=1;
            mpp[it[1]]+=1;
        }
        mpp[n[0]]-=1;
        mpp[n[1]]+=1;

        int cnt=0;
        auto it= mpp.begin();
        while(it!=mpp.end()){
            if(cnt==0){
                temp[0]=it->first;
            }
            cnt+=it->second;
            if(cnt==0){
                temp[1]=it->first;
                ans.push_back(temp);
            }
            it++;
        }
        return ans;
    }
};
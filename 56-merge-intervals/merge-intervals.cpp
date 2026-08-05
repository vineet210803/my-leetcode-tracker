class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& v) {
        vector<vector<int>>ans;
        vector<int>temp(2);
        map<int,int>mpp;
        int cnt=0;
        for(auto it: v ){
            mpp[it[0]]+=-1;
            mpp[it[1]]+=+1;
        }
        auto it=mpp.begin();
        while(it!=mpp.end()){
            if(cnt==0) temp[0]=it->first;
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
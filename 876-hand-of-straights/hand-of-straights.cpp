class Solution {
public:
    bool isNStraightHand(vector<int>& h, int s) {
        int l= h.size();
        if(l%s!=0){
            return false;
        }
        map<int,int>mpp;
        for(auto &it:h){
            mpp[it]++;
        }
        while(!mpp.empty()){
            int curr=mpp.begin()->first;
            for(int i=0; i<s; i++){
                if(mpp[curr+i]<1){
                    return false;
                }
                mpp[curr+i]--;
                if(mpp[curr+i]<1){
                    mpp.erase(curr+i);
                }
            }
        }
    return true;
    }
};
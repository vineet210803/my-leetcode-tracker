class Solution {
public:
    vector<int> topKFrequent(vector<int>& nums, int k) {
        int n=nums.size();
        map<int,int>mpp;
        vector<int>v;
        for(int i=0; i<n; i++){
            mpp[nums[i]]++;
        }
        priority_queue<pair<int,int>, vector<pair<int,int>>>pq;
        for(auto it:mpp){
            pq.push({it.second, it.first});
        } 
        for(int i=0; i<k ; i++){
            v.push_back(pq.top().second);
            pq.pop();
        }
        return v;
    }
};
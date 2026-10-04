class Solution {
public:

    static bool compare(vector<int>& a, vector<int>& b) {
        return a[1] > b[1];
    }

    int maximumUnits(vector<vector<int>>& box, int truckSize) {
        int ans = 0;
        int curr = 0;

        sort(box.begin(), box.end(), compare);

        for(int i = 0; i<box.size(); i++){
            if(curr+box[i][0] <= truckSize){
                curr+=box[i][0];
                ans+=(box[i][0] * box[i][1]);
            }
            else{
                int remaining = truckSize - curr;
                ans +=  (remaining * box[i][1]);
                break;
            }
        }
        return ans;


    }
};
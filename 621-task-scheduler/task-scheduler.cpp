class Solution {
public:
    int leastInterval(vector<char>& t, int n) {
        vector<int> v(26,0);
        for (char &it : t) {
            v[it - 'A']++;
        }
        priority_queue<int> pq;
        for (auto it : v) {
            if(it>0)
            pq.push(it);
        }
        int time = 0;
        while (!pq.empty()) {
            vector<int> temp;
            for (int i = 1; i <= n + 1; i++) {
                if (!pq.empty()) {
                    int tym = pq.top();
                    pq.pop();
                    temp.push_back(tym - 1);
                }
            }
            for (auto it : temp) {
                if (it > 0) {
                    pq.push(it);
                }
            }
            if (pq.empty()) {
                time += temp.size();
            } else {
                time += n + 1;
            }
        }
        return time;
    }
};
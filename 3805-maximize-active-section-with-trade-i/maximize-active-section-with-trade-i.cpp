class Solution {
public:
    int maxActiveSectionsAfterTrade(string s) {
        int n = s.length(), cnt = 0;
        for (int i=0; i<n; i++){  
            if (s[i] == '1')
                cnt++;
        }
        string t = "1" + s + "1";
        int m = t.length(), res = cnt;
        for (int i = 1; i < m - 1;) {
            if (t[i] == '1') {
                int j = i;
                while (j < m && t[j] == '1')
                    j++;
                if (j < m - 1 && t[i - 1] == '0' && t[j] == '0') {
                    int l = 0, r = 0, k = i - 1;
                    while (k >= 0 && t[k] == '0') {
                        l++;
                        k--;
                    }
                    k = j;
                    while (k < m && t[k] == '0') {
                        r++;
                        k++;
                    }
                    res = max(res, cnt + l + r);
                }
                i = j;
            } else {
                i++;
            }
        }
        return res;
    }
};
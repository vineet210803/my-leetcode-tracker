class Solution {
public:

    bool sol(vector<int>& v, int l, int r, int a, int b){
        if(l>r){
            return a>=b;
        }
        int turn= v.size()-(r-l+1);
        if(turn%2==0){
            bool f1= sol(v, l+1, r, a+v[l], b);
            bool f2 = sol(v, l, r-1, a+v[r], b);
            return f1||f2;
        }else{
            bool f3=sol(v, l+1, r, a, b+v[l]);
            bool f4=sol(v, l, r-1, a, b+v[r]);
            return f3&&f4;
        }
    }

    bool predictTheWinner(vector<int>& nums) {
        int l=0;
        int r=nums.size()-1;
        int a=0;
        int b=0;
        return sol(nums, l, r, a, b);
    }
};
class Solution {
public:
    vector<vector<int>> generateMatrix(int n) {
        vector<vector<int>>ans(n, vector<int>(n,0));
        // vector<int>ans;
        int left=0;
        int right=n-1;
        int top=0;
        int bottom=n-1;
        int num=1;
       while(top<=bottom && left<=right){
            
            if(left<=right && top<=bottom){
                for(int i=left; i<=right; i++){
                    ans[top][i]=num;
                    num++;
                }
                top++;
            }
            if(left<=right && top<=bottom){
                for(int j=top; j<=bottom; j++){
                    ans[j][right]=num;
                    num++;
                }
                right--;
            }
            if(left<=right && top<=bottom){
                for(int k=right; k>=left; k--){
                    ans[bottom][k]=num;
                     num++;
                }
                bottom--;
            }
            if(left<=right && top<=bottom){
                for(int l=bottom; l>=top; l--){
                    ans[l][left]=num;
                    num++;
                }
                left++;
            }
        }
        // for(auto it: ans){
        //     cout<<it<<" ";
        // }
        return ans;
    }
};
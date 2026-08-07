class Solution {
public:
    vector<int> spiralOrder(vector<vector<int>>& matrix) {
        vector<int> ans;
        int top=0;
        int left=0;
        int bottom=matrix.size()-1;
        int right=matrix[0].size()-1;

        while(top<=bottom && left<=right){
            
            if(left<=right && top<=bottom){
                for(int i=left; i<=right; i++){
                    ans.push_back(matrix[top][i]);
                }
                top++;
            }
            if(left<=right && top<=bottom){
                for(int j=top; j<=bottom; j++){
                    ans.push_back(matrix[j][right]);
                }
                right--;
            }
            if(left<=right && top<=bottom){
                for(int k=right; k>=left; k--){
                    ans.push_back(matrix[bottom][k]);
                }
                bottom--;
            }
            if(left<=right && top<=bottom){
                for(int l=bottom; l>=top; l--){
                    ans.push_back(matrix[l][left]);
                }
                left++;
            }
        }

        return ans;

    }
};
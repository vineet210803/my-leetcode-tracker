/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left), right(right) {}
 * };
 */
class Solution {
public:

    int dfs(TreeNode* root, int &cnt){
        if(root==nullptr){
            return 0;
        }
        cnt++;
        int lsum=dfs(root->left, cnt);
        int rsum=dfs(root->right, cnt);
        return lsum+rsum+root->val;

    }

    void sol(TreeNode* root, int &ans){
        if(root==nullptr){
            return ;
        }
        int cnt=0;
        int sum=dfs(root, cnt);
        if(sum/cnt==root->val) ans++;
        sol(root->left, ans);
        sol(root->right, ans);
    }

    int averageOfSubtree(TreeNode* root) {
        int ans=0;
        sol(root, ans);
        return ans;
 
    }
};
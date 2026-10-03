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

    void sol(TreeNode * root, vector<int>& v){
        if(root==NULL)return ;

        
        sol(root->left, v);
        v.push_back(root->val);
        sol(root->right, v);


    }

    bool isValidBST(TreeNode* root) {
        vector<int>v;
        sol(root, v);
        long long mini=LLONG_MIN;
        for(auto it:v){
            if(it<=mini)return false;
            mini=it;
        }
        return true;
    }
};
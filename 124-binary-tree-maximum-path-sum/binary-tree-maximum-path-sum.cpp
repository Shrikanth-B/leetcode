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
    int ans=INT_MIN;
    int helper(TreeNode* root){
        if(root==NULL) return 0;
        int left=helper(root->left);
        int right=helper(root->right);
        ans=max(ans,max(left,0)+max(right,0)+root->val);
        return max(max(left,0),max(right,0))+root->val;
    }
    int maxPathSum(TreeNode* root) {
        int r=helper(root);
        return ans;   
    }
};
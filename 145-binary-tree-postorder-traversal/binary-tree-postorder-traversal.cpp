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
    vector<int> nums;
    void check(TreeNode* root){
        if(root==NULL){
            return;
        }
        check(root->left);
        check(root->right);
        nums.push_back(root->val);
    
    }
    vector<int> postorderTraversal(TreeNode* root) {
        check(root);
        return nums;

    }
};
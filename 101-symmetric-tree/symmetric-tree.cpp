/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode() : val(0), left(nullptr), right(nullptr) {}
 *     TreeNode(int x) : val(x), left(nullptr), right(nullptr) {}
 *     TreeNode(int x, TreeNode *left, TreeNode *right) : val(x), left(left),
 * right(right) {}
 * };
 */
class Solution {
public:
    bool isSymmetric(TreeNode* root) {
        queue<TreeNode*>q;
        if (root == NULL)
            return true;
        q.push(root);
        while (!q.empty()) {
            int n = q.size();
            vector<int> ans;
            for (int i = 0; i < n; i++) {
                TreeNode* t = q.front();
                q.pop();
                if (t->left != NULL) {
                    ans.push_back(t->left->val);
                    q.push(t->left);
                } else {
                    ans.push_back(-101);
                }
                if (t->right != NULL) {
                    q.push(t->right);
                    ans.push_back(t->right->val);
                } else {
                    ans.push_back(-101);
                }
            }
           int i=0,j=ans.size()-1;
           while(i<=j){
            if(ans[i]!=ans[j]){
                return false;
            }
            i++,j--;
           }
        }
        return true;
    }
};
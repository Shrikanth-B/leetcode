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
    int maxLevelSum(TreeNode* root) {
        int ans=0;
        if(root==NULL) return ans;
        queue<TreeNode*>q;
        q.push(root);
        int tans=INT_MIN;
        int level=1;
        while(!q.empty()){
            int mans=0;
            int n=q.size();
            for(int i=0;i<n;i++){
                TreeNode* t=q.front(); q.pop();
                if(t->left!=NULL) q.push(t->left);
                if(t->right!=NULL) q.push(t->right);
                mans+=(t->val);
            }
            if(mans>tans){
                tans=max(tans,mans);
                ans=level;
            }
            level++;
        }
        return ans;
    }
};
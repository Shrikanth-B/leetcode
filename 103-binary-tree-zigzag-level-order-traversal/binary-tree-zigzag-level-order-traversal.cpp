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
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
     vector<vector<int>>ans;
     int ex=1;
     queue<TreeNode*>q;
     if(root==NULL) return ans;
     q.push(root);
     while(!q.empty()){
        vector<int>level;
        int n=q.size();
        for(int i=0;i<n;i++){
            TreeNode* t=q.front(); q.pop();
            if(t->left!=NULL) q.push(t->left);
            if(t->right!=NULL) q.push(t->right);
            level.push_back(t->val);
        }
        if(level.size()>0){
            if(ex%2==0){
                reverse(level.begin(),level.end());
            }
            ex++;
            ans.push_back(level);
        }
     }
     return ans;   
    }
};
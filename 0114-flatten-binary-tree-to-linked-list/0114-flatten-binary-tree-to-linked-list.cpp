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
    void traverse(TreeNode* root,vector<int> &x){
        if(!root)return;
        x.push_back(root->val);
        traverse(root->left,x);
        traverse(root->right,x);
    }
    void flatten(TreeNode* root) {
        vector<int> x;
        if(!root)return;
        traverse(root,x);
        root->left=NULL;
        root->right=NULL;
        TreeNode* t=root;
        for(int i=1;i<x.size();i++){
            TreeNode* node = new TreeNode(x[i]);
            t->right=node;
            t=t->right;
        }
    }
};
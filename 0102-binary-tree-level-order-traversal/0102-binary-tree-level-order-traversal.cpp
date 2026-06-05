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
    map<int,vector<int>> x;
    void dep(TreeNode* root,int count){
        if(root==NULL){
            return;
        }
        x[count].push_back(root->val);
        dep(root->left,++count);
        --count;
        dep(root->right,++count);
        --count;
    }
    vector<vector<int>> levelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        dep(root,0);
        for(auto p : x) {
            ans.push_back(p.second);
        }
        return ans;
    }
};
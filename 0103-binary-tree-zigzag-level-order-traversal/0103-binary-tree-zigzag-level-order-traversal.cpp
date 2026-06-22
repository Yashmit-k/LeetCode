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
    void a(TreeNode* root,int l,map<int,vector<int>> &m){
        if(root==NULL){
            return;
        }
        m[l].push_back(root->val);
        a(root->left,l+1,m);
        a(root->right,l+1,m);
    }
    vector<vector<int>> zigzagLevelOrder(TreeNode* root) {
        vector<vector<int>> ans;
        map<int,vector<int>> m;
        a(root,0,m);
        for(auto i:m){
            if(i.first%2!=0){
                reverse(i.second.begin(),i.second.end());
                
            }
            ans.push_back(i.second);
        }
        return ans;
    }
};
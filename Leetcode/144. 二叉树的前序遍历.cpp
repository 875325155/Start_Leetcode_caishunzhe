/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> ans;
    vector<int> preorderTraversal(TreeNode* root) {
        if(!root) return ans;
        Read(root);
        return ans;
    }
    void Read(TreeNode* root)
    {
        if(root)
        {
            ans.push_back(root->val);
            Read(root->left);
            Read(root->right);
        }
    }

};

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
    vector<int> postorderTraversal(TreeNode* root)
    {
        Find(root);
        return ans;
    }
    void Find(TreeNode* root)
    {
        if(!root)
            return;
        Find(root->left);
        Find(root->right);
        ans.push_back(root->val);
    }
};

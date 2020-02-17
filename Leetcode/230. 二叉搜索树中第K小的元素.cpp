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
    int kthSmallest(TreeNode* root, int k)
    {
        Find(root);
        return ans[k-1];
    }
    void Find(TreeNode* root)
    {
        if(!root)
            return;
        Find(root->left);
        ans.push_back(root->val);
        Find(root->right);
    }
};

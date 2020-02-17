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
    vector<int> data;
    int minDiffInBST(TreeNode* root) {
        Find(root);
        int ans=INT_MAX,q;
        for(int i=0;i<data.size()-1;++i)
        {
            q=data[i+1]-data[i];
            if(q<ans)
                ans=q;
        }
        return ans;
    }
    void Find(TreeNode* root)
    {
        if(!root)
            return;
        Find(root->left);
        data.emplace_back(root->val);
        Find(root->right);
    }
};

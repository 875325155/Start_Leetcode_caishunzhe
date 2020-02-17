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
    bool isValidBST(TreeNode* root) {
        Find(root);
        for(int i=0;i<data.size();i++)
        {
            if(i!=data.size()-1)
            {
                if(data[i]>=data[i+1])
                    return false;
            }
        }
        return true;
    }
    void Find(TreeNode* root)
    {
        if(!root)
            return;
        Find(root->left);
        data.push_back(root->val);
        Find(root->right);
    }
};

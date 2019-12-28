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
    vector<vector<int>> levelOrderBottom(TreeNode* root) {
        vector<vector<int> >ans;
        if(!root) return ans;
        queue<TreeNode*> data;
        data.push(root);
        while(!data.empty())
        {
            int size=data.size();
            vector<int> s1;
            for(int i=0;i<size;i++)
            {
                TreeNode* s2=data.front();
                data.pop();
                s1.push_back(s2->val);
                if(s2->left)
                    data.push(s2->left);
                if(s2->right)
                    data.push(s2->right);

            }
            ans.push_back(s1);
        }
        reverse(ans.begin(),ans.end());
        return ans;
    }

};

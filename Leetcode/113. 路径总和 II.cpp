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
    void dfs(TreeNode* node,int& pathvalue,int sum,vector<int>&path,vector<vector<int> >&ans)
    {
        if(!node) return;
        pathvalue+=node->val;
        path.push_back(node->val);
        if(!node->left&&!node->right&&pathvalue==sum)
            ans.push_back(path);
        if(node->left)
            dfs(node->left,pathvalue,sum,path,ans);
        if(node->right)
            dfs(node->right,pathvalue,sum,path,ans);
        pathvalue-=node->val;
        path.pop_back();

    }
    vector<vector<int>> pathSum(TreeNode* root, int sum) {
        vector<vector<int> > ans;
        vector<int> path;
        int pathvalue=0;
        dfs(root,pathvalue,sum,path,ans);
        return ans;

    }
};

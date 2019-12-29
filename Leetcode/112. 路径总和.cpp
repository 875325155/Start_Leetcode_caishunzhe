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
    void bfs(TreeNode* root,int&sumval,int sum,bool&flag)
    {
        if(!root) return;
        sumval+=root->val;
        if(!root->left&&!root->right&&sumval==sum)
        {
            flag=true;
            return;
        }
        if(root->left)
             bfs(root->left,sumval,sum,flag);
        if(root->right)
             bfs(root->right,sumval,sum,flag);
        sumval-=root->val;
    }
    bool hasPathSum(TreeNode* root, int sum) {
        if(!root) return false;
        int sumval=0;
        bool flag=false;
        bfs(root,sumval,sum,flag);
        return flag;
    }
};

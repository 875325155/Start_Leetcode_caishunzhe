/**
 * Definition for a binary tree node.
 * struct TreeNode {
 *     int val;
 *     TreeNode *left;
 *     TreeNode *right;
 *     TreeNode(int x) : val(x), left(NULL), right(NULL) {}
 * };
 */
//����˼·������������Ϊ������С�������֣������õ���
//�����Ȼ������
class Solution {
    const int P=1000000007;
    typedef long long ll;
    int get(TreeNode* root)
    {
        if(root==NULL)
            return 0;
        return root->val+get(root->left)+get(root->right);
    }
    int work(TreeNode* root,int s,ll &ans)
    {
        if(root==NULL)
            return 0;
        int t=root->val+work(root->left,s,ans)+work(root->right,s,ans);
        ans=max(ans,(ll)t*(s-t));
        return t;
    }

public:
    int maxProduct(TreeNode* root) {
        int sum=0;
        ll ans=0;
        int s=get(root);
        work(root,s,ans);
        return ans%P;
    }
};

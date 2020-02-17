/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode(int x) : val(x), next(NULL) {}
 * };
 */
class Solution {
public:
    vector<int> nextLargerNodes(ListNode* head) {
        int tmp=0;
        vector <int>node;
        while(head)
        {
            node.emplace_back(head->val);
            head=head->next;
            tmp++;
        }
        vector<int> ans(tmp,0);
        stack<int> data;
        tmp=0;
        for(int i=0;i<node.size();++i)
        {
            while(!data.empty()&&node[i]>node[data.top()])
            {
                int t=data.top();
                data.pop();
                ans[t]=node[i];
            }
            data.push(i);
        }

        return ans;
    }
};

class Solution {
public:

    struct Trie{
        struct TrieNode
        {
            bool end;
            TrieNode* child[2];
        };
        TrieNode * root;
        Trie(){
            root = new TrieNode();
        }
        void insert(int x)
        {
            TrieNode *p = root;
            for(int i = 31; i >=0; --i)
            {
                int bit = (x >> i) & 1;
                if(!p->child[bit])
                    p->child[bit] = new TrieNode();
                p = p->child[bit];
            }
            p->end = true;
        }

        int search_max_XOR(int x)
        {
            TrieNode *p = root;
            int ans = 0;
            for(int i = 31; i >= 0; --i)
            {
                int bit = (x >> i) & 1;
                if(p->child[bit^1])
                {
                    p = p->child[bit^1];
                    ans = ans | (1 << i);
                }
                else
                    p = p->child[bit];
            }
            return ans;
        }
    };

    int findMaximumXOR(vector<int>& nums) {
        int n = nums.size();
        if(n == 0 || n == 1) return 0;
        Trie t;
        t.insert(nums[0]);
        int ans = INT_MIN;
        for(int i = 1; i < n; ++i)
        {
            ans = max(ans, t.search_max_XOR(nums[i]));
            t.insert(nums[i]);
        }
        return ans;
    }
};

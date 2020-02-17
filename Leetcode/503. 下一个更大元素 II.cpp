class Solution {
public:
    //单调栈
    vector<int> nextGreaterElements(vector<int>& nums) {
        int len=nums.size();
        for(int i=0;i<len;++i)
        {
            nums.emplace_back(nums[i]);
        }//为了实现所谓的循环队列
        stack<int> data;
        vector<int> ans(2*len,-1);
        for(int i=0;i<nums.size();++i)
        {
            while(!data.empty()&&nums[i]>nums[data.top()])
            {
                int t=data.top();
                data.pop();
                ans[t]=i;
            }
            data.push(i);
        }
        ans.erase(ans.begin()+len,ans.end());
        return ans;
    }
};

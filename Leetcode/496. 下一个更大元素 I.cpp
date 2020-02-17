class Solution {
public:
    vector<int> nextGreaterElement(vector<int>& nums1, vector<int>& nums2) {
        stack<int> data;
        int len=nums2.size();
        for(int i=0;i<nums1.size();++i)
        {
            for(int j=0;j<nums2.size();++j)
            {
                if(nums1[i]==nums2[j])
                {
                    nums1[i]=j;
                    break;
                }
            }
        }
        vector<int> q(len,-1);
        for(int i=0;i<nums2.size();++i)
        {
            while(!data.empty()&&nums[data.top()]<nums2[i])
            {
                int t=data.top();
                data.pop();
                q[t]=nums2[i];
            }
            data.push(i);
        }
        for(int i=0;i<nums1.size();++i)
            nums1[i]=nums2[nums1[i]];
        return nums1;
    }
};

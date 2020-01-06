class Solution {
public:
    int maxSumDivThree(vector<int>& nums) {
        sort(nums.begin(),nums.end());
        int ans=0,ans1;
        vector<int> data(nums);
        queue<int> s1,s2;
        for(int i=nums.size()-1;i>=0;i--)
            data[i]%=3;
        for(int i=nums.size()-1;i>=0;i--)
        {
            if(data[i]==0)
                ans+=nums[i];
            else if(data[i]==1)
            {
                s1.push(nums[i]);
            }
            else
            {
                s2.push(nums[i]);
            }

        }
        return ans;
    }
};

class Solution {
public:
    int threeSumClosest(vector<int>& nums, int target) {
        int ans=1000000;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size()-2;++i)
        {
            int j=i+1,k=nums.size()-1;
            while(j<k)
            {
                int count=nums[i]+nums[j]+nums[k];
                if(abs(count-target)<abs(ans-target))
                    ans=count;
                if(count>target)
                {
                    k--;
                }
                else if(count<target)
                {
                    j++;
                }
                else
                {
                    return count;
                }
            }
        }
        return ans;
    }
};

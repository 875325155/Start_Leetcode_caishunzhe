class Solution {
public:
    int rob(vector<int>& nums) {
        int len=nums.size();
        vector<int> data(len+1);
        data[0]=0,data[1]=nums[0];
        if(nums.size()==0)
            return nums[0];
        for(int i=1;i<len;i++)
        {
            data[i+1]=max(data[i],data[i-1]+nums[i]);
        }
        return data[len];
    }
};

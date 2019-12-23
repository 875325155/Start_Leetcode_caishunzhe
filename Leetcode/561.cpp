class Solution {
public:
    int arrayPairSum(vector<int>& nums) {
        int count=0,len=nums.size();
        sort(nums.begin(),nums.end());
        for(int i=0;i<len;i+=2)
            count+=nums[i];
    }
};

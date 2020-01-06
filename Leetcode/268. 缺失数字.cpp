class Solution {
public:
    int missingNumber(vector<int>& nums) {
        if(nums.size()==0)
            return 0;
        int data[nums.size()+1]={0};
        for(int i=0;i<nums.size();i++)
            data[nums[i]]=1;
        for(int i=0;i<nums.size()+1;i++)
            if(data[i]==0)
                return i;
        return 0;

    }
};

class Solution {
public:
    int search(vector<int>& nums, int target) {
        int len=nums.size();
        int flag=-1,first=0,second=len-1,middle=(first+second)/2;
        while(first<=second)
        {
            if(target>nums[middle])
            {
                first=middle+1;
                middle=(first+second)/2;
            }
            else if(target<nums[middle])
            {
                second=middle-1;
                middle=(first+second)/2;
            }
            else
            {
                flag=middle;
                break;
            }
        }
        return flag;
    }
};

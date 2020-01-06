class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& nums) {
     int count=0,data=0;
     bool flag=false;
     for(int i=0;i<nums.size();i++)
     {
         if(nums[i]==1)
         {
            if(flag)
            {
                data++;
            }
            else
            {
                flag=true;
                data=1;
            }
         }
         else
         {
             flag=false;
             count=max(count,data);
             data=0;
         }
     }
     return count;
    }
};

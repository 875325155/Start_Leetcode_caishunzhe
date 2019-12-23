class Solution {
public:
    int findNumbers(vector<int>& nums) {
        int count=0;
        for(int i=0;i<nums.size();i++)
        {
           char s[10];
           sprintf(s,"%d",nums[i]);
            if(strlen(s)%2==0)
                count++;
        }
    return count;
    }
};

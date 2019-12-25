class Solution {
public:
    int singleNumber(vector<int>& nums) {
        map<int,int> s;
        int ans;
        for(int i=0;i<nums.size();i++)
            {
                s[nums[i]]++;
            }
        map<int,int>::iterator it=s.begin();
        for(;it!=s.end();it++)
        {
            if(it->second==1)
            {
                ans=it->first;
                break;
            }
        }
        return ans;
    }
};

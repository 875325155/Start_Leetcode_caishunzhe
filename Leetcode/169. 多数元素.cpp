class Solution {
public:
    int majorityElement(vector<int>& nums) {
        int len=nums.size();
        unordered_map<int,int> data;
        for(int i=0;i<len;i++)
            data[nums[i]]++;
        for(unordered_map<int,int>::iterator it=data.begin();it!=data.end();it++)
        {
            if(it->second>=len/2);
                return it->first;
        }
    }
};

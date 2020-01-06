class Solution {
public:
    vector<vector<int>> threeSum(vector<int>& nums) {
        vector<vector<int>> data;
        if(nums.size()<3)
        return data;
        sort(nums.begin(),nums.end());
        int b,c;
        for(int a=0;a<nums.size()-2;++a)
        {
            if(a>0&&nums[a]==nums[a-1])
                continue;
            b=a+1,c=nums.size()-1;
            while(b<c)
            {
                int count=nums[a]+nums[b]+nums[c];
                if(count>0)
                {
                    --c;
                }
                else if(count<0)
                {
                    ++b;
                }
                else
                {
                    data.push_back({nums[a],nums[b],nums[c]});
                    while(b<c&&nums[b+1]==nums[b])
                        ++b;
                    while(b<c&&nums[c]==nums[c-1])
                        --c;
                    --c;
                    ++b;
                }

            }
        }

        return data;

    }
};

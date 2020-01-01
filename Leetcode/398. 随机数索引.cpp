class Solution {
public:
    map<int,vector<int> >data;
    Solution(vector<int>& nums) {
        for(int i=0;i<nums.size();i++)
        {
            data[nums[i]].push_back(i);
        }
    }

    int pick(int target) {
        vector<int> s1=data[target];
        int len=s1.size();
        int a=0,b=len-1;
        int rand_num=(rand() % (b-a+1))+ a;
        return s1[rand_num];
    }
};

/**
 * Your Solution object will be instantiated and called as such:
 * Solution* obj = new Solution(nums);
 * int param_1 = obj->pick(target);
 */

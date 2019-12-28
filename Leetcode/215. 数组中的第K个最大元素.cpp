class Solution {
public:
    bool cmp(int a,int b)
        return a>b;
    int findKthLargest(vector<int>& nums, int k) {
        sort(nums.begin(),nums.end(),cmp);
        int ans=num[k-1];
        return ans;
    }
};

class KthLargest {
public:
	const bool cmp(int a,int b)
		return a>b;
    KthLargest(int k, vector<int>& nums) {
		//sort(nums.begin(),nums.end(),cmp);
        
    }
    
    int add(int val) {
        nums.push_back(val);
		sort(nums.begin(),nums.end(),cmp);
		return nums[k-1];
    }
};

/**
 * Your KthLargest object will be instantiated and called as such:
 * KthLargest* obj = new KthLargest(k, nums);
 * int param_1 = obj->add(val);
 */
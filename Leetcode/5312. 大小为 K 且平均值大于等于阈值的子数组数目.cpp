class Solution {
public:
    int numOfSubarrays(vector<int>& arr, int k, int threshold) {
        int ans=0;
        int q=k*threshold,data=0; //需要进行比较的
        for(int i=0;i<k;i++)
            data+=arr[i];
        if(data>=q)
            ans=1;
        for(int i=0;i+k<arr.size();i++)
        {
            data=data-arr[i]+arr[i+k];
            if(data>=q)
                ans++;
        }
        return ans;
    }
};

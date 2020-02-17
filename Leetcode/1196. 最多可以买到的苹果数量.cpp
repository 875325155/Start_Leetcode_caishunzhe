class Solution {
public:
    int maxNumberOfApples(vector<int>& arr) {
        sort(arr.begin(),arr.end());
        int count=0,flag=0;
        int i=0;
        for(;i<arr.size();i++)
        {
            count+=arr[i];
            if(count>5000)
            {
                flag=1;
                break;
            }
        }
        if(flag)
            return i;
        else
            return arr.size();
    }
};

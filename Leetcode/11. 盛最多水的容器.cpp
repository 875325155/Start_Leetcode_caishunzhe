class Solution {
public:
    int maxArea(vector<int>& height) {
        int len=height.size()-1;
        int left=0,right=len;
        int value=0;
        while(left<right)
        {
            value=max(value,(right-left)*min(height[left],height[right]));
            if(height[left]>height[right])
                right--;
            else
                left++;
        }
        return value;
    }
};

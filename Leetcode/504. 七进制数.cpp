class Solution {
public:
    string convertToBase7(int num) {
        string ans;
        bool flag=false;
        if(num<0)
        {
            abs(num);
            //flag=true;
        }

            while(num>0)
            {
                ans+=(num%7);
                num/=7;
            }
            if(flag)
                ans+='-';
            reverse(ans.begin(),ans.end());
            return ans;

    }
};

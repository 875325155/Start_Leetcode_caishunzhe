class Solution {
public:
    int balancedStringSplit(string s) {
        int flag=0,ans=0;
        if(s.size()==1)
            return 0;
        for(int i=0;i<s.size();i++)
        {
            if(s[i]=='R')
            {
                flag++;
                if(flag==0)
                    ans++;
            }
            else
            {
                flag--;
                if(flag==0)
                    ans++;
            }
        }
        return ans;
    }
};

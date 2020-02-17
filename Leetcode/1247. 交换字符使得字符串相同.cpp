class Solution {
public:
    int minimumSwap(string s1, string s2) {
        int ans=0,q1=0,q2=0;
        for(int i=0;i<s1.size();i++)
        {
            if(s1[i]=='x'&&s2[i]=='y')
                q1++;
            else if(s1[i]=='y'&&s2[i]=='x')
                q2++;
        }
        ans=q1/2+q2/2;
        q1%=2;
        q2%=2;
        if(q1+q2==1)
            return -1;
        else if(q1+q2==2)
            ans+=2;
        return ans;

    }
};

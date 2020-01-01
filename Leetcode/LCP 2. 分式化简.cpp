class Solution {
public:
    int gcd(int a,int b)
    {
        if(b==0)
            return a;
        else
            return gcd(b,a%b);
    }
    vector<int> fraction(vector<int>& cont) {
        vector<int> ans(2);
        int len=cont.size();
        ans[0]=cont[len-1];
        ans[1]=1;
        if(cont.size()==1)
        {
            return ans;
        }
        for(int i=len-2;i>=0;i--)
        {
            int q=ans[0];
            ans[0]=ans[0]*cont[i]+ans[1];
            ans[1]=q;
            int p=gcd(ans[0],ans[1]);
            ans[0]/=p;
            ans[1]/=p;
        }
        return ans;
    }
};

class Solution {
public:
    vector<int> addToArrayForm(vector<int>& A, int K) {
        reverse(A.begin(),A.end());
        vector<int> shun;
        char s[10];
        sprintf(s,"%d",K);
        int len=strlen(s),n=0,m1,m2;
        for(int i=0;i<A.size()||i<len;i++)
        {
            m1=K%10;
            if(i>=A.size())
                m2=0;
            else
                m2=A[i];
            n=n+m1+m2;
            shun.push_back(n%10);
            n/=10;
            K/=10;
        }
        if(n!=0)
            shun.push_back(n);
        reverse(shun.begin(),shun.end());
        return shun;
    }
};

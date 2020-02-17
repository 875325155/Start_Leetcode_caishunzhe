class Solution {
public:
    int bagOfTokensScore(vector<int>& tokens, int P) {
        sort(tokens.begin(),tokens.end());
        int m=tokens.size();
        int ans=0,i=0;
        for(;i<m;i++) //¿ÉÒÔÂòµÄ
        {
            if(P>=tokens[i])
            {
                P-=tokens[i];
                ans++;
            }
            else
                break;
        }

        int first=0;
        while(i+2<=m-1&&first<=i)
        {
            if(P+tokens[m-1]>=tokens[i]+tokens[i+1])
            {
                i+=2;
                P=P+tokens[m-1]-tokens[i]-tokens[i+1];
                m--;
                ans++;
                first++;
            }
            else
                break;
        }
        return ans;
    }
};

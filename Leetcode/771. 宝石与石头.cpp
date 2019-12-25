class Solution {
public:
    int numJewelsInStones(string J, string S) {
    int data[60]={0};
    int count=0;
    for(int i=0;i<J.size();i++)
    {
        if(J[i]>='a'&&J[i]<='z')
            data[J[i]-'a']=1;
        else
            data[J[i]-'A'+26]=1;
    }
    for(int i=0;i<S.size();i++)
    {
        if(S[i]>='a'&&S[i]<='z')
            {if(data[S[i]-'a'])
                count++;
            }
        else
        {
            if(data[S[i]-'A'+26])
                count++;
        }
    }
    return count;
    }
};

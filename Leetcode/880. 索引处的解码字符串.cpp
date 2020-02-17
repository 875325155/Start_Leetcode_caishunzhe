class Solution {
public:
    string decodeAtIndex(string S, int K) {
        stack<string> data1;
        stack<long long int> data2;
        string tmp1="",ans;
        for(char s:S)
        {
            if(isdigit(s))
            {
                int q=s-'0',p=0;
                if(!data1.empty())
                    p=data2.top();
                data2.push(q*(tmp1.size()+p));
                data1.push(tmp1)
                tmp1.clear();
            }
            else if(isalpha(s))
            {
                tmp1+=s;
            }
        }
        return ans;
    }
};

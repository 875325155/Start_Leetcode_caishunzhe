class Solution {
public:
    int scoreOfParentheses(string S) {
        stack<int> data1,stack<char> data2;
        int ans=0;
        for(int i=0;i<S.size();i++)
        {
            if(S[i]=='(')
                data2.push(S[i]);
            else
            {
                data2.pop();
            }
        }
    }
};

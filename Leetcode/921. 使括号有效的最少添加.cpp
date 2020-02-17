#include<iostream>
#include<stack>
#include<string>
using namespace std;
int minAddToMakeValid(string S) {
    stack<char> data;
    if(S.size()==0)
        return 0;
    for(int i=0;i<S.size();i++)
    {
        if(S[i]=='(')
            data.push('(');
        else if (S[i]==')')
        {
            if(!data.empty())
            {
                if(data.top()=='(')
                    data.pop();
                else
                    data.push(')');
            }
            else
            {
                data.push(')');
            }
        }
    }
    return data.size();
}

int main()
{
    string S;
    cin>>S;
    cout<<minAddToMakeValid(S);
    return 0;
}

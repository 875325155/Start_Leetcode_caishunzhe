//ÀûÓÃÕ»
#include<stack>
#include<string>
#include<iostream>
using namespace std;
bool backspaceCompare(string S, string T) {
    stack<char> s,t;
    for(int i=0;i<S.size();i++)
    {
        if(S[i]=='#')
        {
            if(s.empty())
                s.pop();
        }
        else
            s.push(S[i]);
    }
    for(int i=0;i<T.size();i++)
    {
        if(T[i]=='#')
        {
            if(t.empty())
                t.pop();
        }
        else
            t.push(T[i]);
    }
    if(s.size()!=t.size())
    {
        //cout<<"hehh"<<endl;
        return false;
    }
    else
    {
        while(!s.empty()&&!t.empty())
        {
            if(s.top()==t.top())
            {
                //cout<<"jehhe "<<s.top()<<endl;
                s.pop();
                t.pop();
            }
            else
                return false;
        }
        return true;
    }
}

int main()
{
    string S="y#fo##f";
    string T="y#f#o##f";
    cout<<backspaceCompare(S,T);
    return 0;
}

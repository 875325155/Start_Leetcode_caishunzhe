#include<iostream>
#include<stack>
#include<map>
using namespace std;
bool isvalid(string s)
    {
        if(s.empty())
            return true;
        else
        {
            map<char,char> smap={{'(',')'},{'[',']'},{'{','}'}};
            stack<char> st;
            for(int i=0;i<s.size();i++)
            {
                if(st.empty())
                    st.push(s[i]);
                else
                {
                    if(smap[st.top()]==s[i])
                    {
                        st.pop();
                    }
                    else
                        st.push(s[i]);
                }
            }
            return st.empty();
        }
    }
int main()
{
    string s;
    cin>>s;


    bool q=isvalid(s);
    cout<<q;
    return 0;
}

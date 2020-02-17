class Solution {
public:
    string minRemoveToMakeValid(string s) {
        string ans;
        vector<int> data;stack<char> cnt;
        for(int i=0;i<s.size();++i)
        {
            if(s[i]=='(')
            {
                cnt.push(s[i]);
                data.push_back(i);
            }
            else if(s[i]==')')
            {
                if(!cnt.empty()&&cnt.top()=='(')
                {
                    cnt.pop();
                    data.pop_back();
                }
                else
                {
                    cnt.push(s[i]);
                    data.push_back(i);
                }
            }
        }
        vector<int> need(s.size(),1);
        for(int i=0;i<data.size();i++)
            need[data[i]]=0;
        for(int i=0;i<s.size();++i)
        {
            if(need[i])
                ans+=s[i];
        }
        return ans;
    }
};

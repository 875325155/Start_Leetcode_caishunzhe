class Solution {
public:
    bool isSubsequence(string s, string t) {
        int s1=0,s2=0;
        while(s1<s.size()&&s2<t.size())
        {
            if(s[s1]==t[s2])
            {
                ++s1;
                ++s2;
            }
            else
                ++s2;
        }
        if(s1==s.size())
            return true;
        else
            return false;
    }
};

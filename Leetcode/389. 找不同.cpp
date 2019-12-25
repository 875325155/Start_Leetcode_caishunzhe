class Solution {
public:
    char findTheDifference(string s, string t) {
        char ans;
        int data1[26]={0},data2[26]={0};
        for(int i=0;i<s.size();i++)
        {
            data1[s[i]-'a']++;
        }
        for(int i=0;i<t.size();i++)
        {
            data2[t[i]-'a']++;
        }
        for(int i=0;i<26;i++)
        {
            if(data1[i]!=data2[i])
            {
                ans=(i+'a');
            }
        }
        return ans;
    }
};

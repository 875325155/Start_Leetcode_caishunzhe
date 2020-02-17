class Solution {
public:
    int minSteps(string s, string t) {
        vector<int> data_s(26,0),data_t(26,0);
        int len=s.size();
        for(int i=0;i<len;i++)
        {
            data_s[s[i]-'a']++;
            data_t[t[i]-'a']++;
        }
        int ans=0;
        for(int i=0;i<26;i++)
        {
            ans+=abs(data_s[i]-data_s[i]);
        }
        if(ans%2!=0)
            return (ans+1)/2;
        return ans/2;

    }
};

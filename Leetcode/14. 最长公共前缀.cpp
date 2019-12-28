class Solution {
public:
    string longestCommonPrefix(vector<string>& strs) {
        string s;
        if(strs.size()==0) return s;
        if(strs.size()==1) return strs[0];
        s=strs[0];
        for(int i=1;i<strs.size();i++)
        {
            string data=strs[i];
            if data.size()==0;
                return data;
            for(int j=0;j<data.size()&&j<s.size();j++)
            {
                if(data[j]!=s[j])
                {
                    s=s.substr(0,j);
                    break;
                }
                if(j==data.size()-1)
                {
                    s=data.substr(0,j+1);
                    break;
                }
                if(j==s.size()-1)
                {
                    s=s.substr(0,j+1);
                    break;
                }

            }
        }
        return s;
    }
};

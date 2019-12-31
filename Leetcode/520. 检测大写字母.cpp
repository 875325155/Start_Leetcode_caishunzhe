class Solution {
public:
    bool detectCapitalUse(string word) {
        bool flag=false;
        if(word[0]>='A'&&word[0]<='Z')
            flag=true;
        if(word.size()==1)
            return true;
        if(flag)
        {
            if(word[1]>='A'&&word[1]<='Z')
            {
                for(int i=1;i<word.size();i++)
                    if(word[i]>='a'&&word[i]<='z')
                    {
                        return false;
                    }
            }
            else
            {
                for(int i=1;i<word.size();i++)
                    if(word[i]>='A'&&word[i]<='Z')
                    {
                        return false;
                    }
            }
        }
        else
        {
            for(int i=1;i<word.size();i++)
            {
                if(word[i]>='A'&&word[i]<='Z')
                    return false;
            }
        }
        return true;

    }
};

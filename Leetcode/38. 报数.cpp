class Solution {
public:
    string countAndSay(int n) {
        vector<string> data;
        data.push_back("1");
        if(n==1)
            return data[0];
        for(int i=0;i<n;i++)
        {
           string s1=data[i];
           string s2;
           int s3=0;
           for(int i=0;i<s1.size()-1;i++)
           {
                s3++;

           }
           if(i==n)
            return data[n-1];
        }


    }
};

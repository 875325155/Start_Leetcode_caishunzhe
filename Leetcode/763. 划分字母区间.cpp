class Solution {
public:
    vector<int> partitionLabels(string S) {
        vector<int> ans;
        if(S.size()==1)
        {
            ans.push_back(1);
            return ans;
        }
        int data[26]={0};
        for(int i=0;i<S.size();i++)
            data[S[i]-'a']=i;
        for(int i=0;i<S.size();)
        {
            int r=data[S[i]-'a'];
            for(int j=i+1;j<=r;j++)
                r=max(r,data[S[j]-'a']);
            ans.push_back(r+1-i);
            i=r+1;
        }
        return ans;
    }
};

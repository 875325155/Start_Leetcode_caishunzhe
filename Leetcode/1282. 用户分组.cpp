class Solution {
public:
    struct data
    {
        int a;
        int b;
    }Data;
    static bool cmp(const data f1,const data f2)
    {
        return f1.b<f2.b;
    }
    vector<vector<int>> groupThePeople(vector<int>& groupSizes) {
        vector<vector<int> >ans;
        vector<data> s1;
        for(int i=0;i<groupSizes.size();i++)
        {
            Data.a=i,Data.b=groupSizes[i];
            s1.push_back(Data);
        }
        sort(s1.begin(),s1.end(),cmp);
        for(int i=0;i<groupSizes.size();)
        {
            int n=s1[i].b;
            vector<int> m;
            for(int j=i;j<n+i;j++)
            {
                m.push_back(s1[j].a);
            }
            ans.push_back(m);
            i+=n;
        }
    return ans;


    }
};

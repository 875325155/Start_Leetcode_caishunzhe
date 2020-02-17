class Solution {
public:
    static bool cmp(pair<int,int> &p1,pair<int,int> &p2)
    {
        return p1.second>p2.second;
    }
    int minSetSize(vector<int>& arr) {
        int len=arr.size();
        sort(arr.begin(),arr.end());
        map<int,int> data;
        for(int i=0;i<len;i++)
        {
            ++data[arr[i]]; //Í³¼Æ´ÊÆµ
        }
        vector<pair<int,int> > vpr;
        for(map<int,int>::iterator it=data.begin();it!=data.end();it++)
        {
            vpr.push_back(make_pair(it->first,it->second));
        }
        sort(vpr.begin(),vpr.end(),cmp);
        int count=0,ans=0;
        for(int i=0;i<vpr.size();i++)
        {
            count+=vpr[i].second;
            ans++;
            if(count>=len/2)
            {
                break;
            }
        }
        return ans;

    }
};

class Solution {
public:
    static bool cmp(vector<int> a,vector<int> b)
    {
        if(a[1]!=b[1])
            return a[1]>b[1];
        return a[0]>b[0];
    }
    vector<int> filterRestaurants(vector<vector<int>>& restaurants, int veganFriendly, int maxPrice, int maxDistance) {
        vector<vector<int> > data;
        for(int i=0;i<restaurants.size();i++)
        {
            vector<int> res=restaurants[i];
            if(veganFriendly==1&&res[2]==0)
                continue;
            if(res[3]>maxPrice||res[4]>maxDistance)
                continue;
            data.push_back(res);
        }//ɸѡ
        sort(data.begin(),data.end(),cmp);
        vector<int> ans;
        for(int i=0;i<data.size();i++)
        {
            ans.push_back(data[i][0]);
        }
        return ans;
     }
};

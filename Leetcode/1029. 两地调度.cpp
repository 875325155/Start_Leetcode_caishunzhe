class Solution {
public:
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int m=costs.size();
        int ans=0;
        vector<int> s1,s2,data(m);
        for(int i=0;i<m;i++)
        {
            if(costs[i][0]<costs[i][1])
                s1.push_back(i);
            else
                s2.push_back(i);
            data.push_back(costs[i][0]-costs[i][1])
        }
        if(s1.size()==m/2)
        {
            for(int i=0;i<s1.size();i++)
            {
                ans+=costs[s1[i]][0];
            }
            for(int i=0;i<s2.size();i++)
            {
                ans+=costs[s2[i]][1];
            }
        }
        else if(s1.size()<m/2)
        {

        }
        else
        {

        }


        return ans;
    }
};

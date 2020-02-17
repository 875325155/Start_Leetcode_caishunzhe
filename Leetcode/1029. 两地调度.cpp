class Solution {
public:
    bool cmp(vector<int> a,vector<int> b)
    {
        return (a[0]-a[1])>(b[0]-b[1]);
    }
    int twoCitySchedCost(vector<vector<int>>& costs) {
        int m=costs.size();
        sort(begin(costs), end(costs),
                [](const vector<int> &o1, const vector<int> &o2) {
            return (o1[0] - o1[1] < o2[0] - o2[1]);
        });

        int ans=0;
        for(int i=0;i<m/2;i++)
        {
            ans+=costs[i][0];
        }
        for(int i=m/2;i<m;i++)
        {
            ans+=costs[i][1];
        }
        return ans;

    }
};

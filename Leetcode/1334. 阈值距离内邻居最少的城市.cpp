class Solution {
public:
    int findTheCity(int n, vector<vector<int>>& edges, int distanceThreshold) {
        vector<vector<int> > D(n,vector<int>(n,INT_MAX));
        for(int i=0;i<edges.size();i++)
        {
            D[edges[i][0]][edges[i][1]]=edges[i][2];
            D[edges[i][1]][edges[i][0]]=edges[i][2];
        }
        for(int k=0;k<n;k++)
        {
            for(int i=0;i<n;i++)
                for(int j=0;j<n;j++)
                {
                    if(i==j||D[i][k]==INT_MAX||D[k][j]==INT_MAX)
                    {
                        continue;
                    }
                    D[i][j]=min(D[i][j],D[i][k]+D[k][j]);
                }
        }
        int ret;
        int minNum=INT_MAX;
        for(int i=0;i<n;i++)
        {
            int cnt=0;
            for(int j=0;j<n;j++)
            {
                if(i!=j&&D[i][j]<=distanceThreshold)
                    cnt++;
            }
            if(cnt<=minNum)
            {
                minNum=cnt;
                ret=i;
            }
        }
        return ret;

    }
};

class Solution {
public:
    int projectionArea(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int z=0;
        vector<int> x(n,0),y(m,0);
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j]>0)
                    z++;
                if(grid[i][j]>x[j])
                    x[j]=grid[i][j];
                if(grid[i][j]>y[i])
                    y[i]=grid[i][j];
            }
        }
        for(int i=0;i<n;i++)
            z+=x[i];
        for(int i=0;i<m;i++)
            z+=y[i];
        return z;
    }
};

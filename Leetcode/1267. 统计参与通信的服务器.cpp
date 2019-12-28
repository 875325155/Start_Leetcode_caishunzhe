class Solution {
public:
    int x={0,0,-1,1};
    int y={1,-1,0,0};
    void dfs(vector<vector<int>>& grid,int &count,int i,int j)
    {

    }
    int countServers(vector<vector<int>>& grid) {
        int m=grid.size(),n=grid[0].size();
        int count=0;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(grid[i][j])
                {
                    dfs(grid,count,i,j);
                }
            }
        }
    }
};

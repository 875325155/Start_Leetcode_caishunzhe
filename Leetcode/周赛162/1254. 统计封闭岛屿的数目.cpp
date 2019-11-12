class Solution {
public:
    int m,n;
    //利用dfs进行遍历
    void dfs(vector<vector<int>>& grid,int x,int y){
        if(x>=0 && x<m && y>=0 && y<n && grid[x][y]==0){
            grid[x][y] = 1;
            int dx[] = {-1,0,1,0};
            int dy[] = {0,-1,0,1};
            for(int i=0;i<4;++i) dfs(grid,x+dx[i],y+dy[i]);
        }
    }
    int closedIsland(vector<vector<int>>& grid) {
        m = grid.size();
        n = grid[0].size();
        int ans = 0;
        //对边界进行遍历，将其图上颜色
        for(int i=0;i<m;++i){
            dfs(grid,i,0);
            dfs(grid,i,n-1);
        }
        for(int i=0;i<n;++i){
            dfs(grid,0,i);
            dfs(grid,m-1,i);
        }
        for(int i=0;i<m;++i){
            for(int j=0;j<n;++j) if(grid[i][j]==0){
                dfs(grid,i,j);
                ++ans;
            }
        }
        return ans;
    }
};

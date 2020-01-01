class Solution {
public:
    void check(vector<vector<int>>& grid,int m,int n,int i,int j,int &count)
    {
        int new_i1=i+1,new_i2=i-1,new_j1=j+1,new_j2=j-1;
        if(new_i1<m)
        {
            for(;new_i1<m;new_i1++)
            {
                if(grid[new_i1][j])
                    count++;
            }
        }
        if(new_i2>=0)
        {
            for(;new_i1>=0;new_i1--)
            {
                if(grid[new_i1][j])
                    count++;
            }
        }
        if(new_j1<n)
        {
            for(;new_j1<n;new_j1++)
            {
                if(grid[i][new_j1])
                    count++;
            }
        }
        if(new_j2>=0)
        {
            for(;new_j2>=0;new_j2--)
            {
                if(grid[i][new_j2])
                    count++;
            }
        }

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
                    int new_i1=i+1,new_i2=i-1,new_j1=j+1,new_j2=j-1;
                    bool flag=false;
                    if(new_i1<m)
                    {
                        for(;new_i1<m;new_i1++)
                        {
                            if(grid[new_i1][j])
                                {
                                    count++;
                                    flag=true;
                                    break;
                                }
                        }
                    }
                    if(new_i2>=0&&!flag)
                    {
                        for(;new_i2>=0;new_i2--)
                        {
                            if(grid[new_i2][j])
                                 {
                                    count++;
                                    flag=true;
                                    break;
                                }
                        }
                    }
                    if(new_j1<n&&!flag)
                    {
                        for(;new_j1<n;new_j1++)
                        {
                            if(grid[i][new_j1])
                                 {
                                    count++;
                                    flag=true;
                                    break;
                                }
                        }
                    }
                    if(new_j2>=0&&!flag)
                    {
                        for(;new_j2>=0;new_j2--)
                        {
                            if(grid[i][new_j2])
                                 {
                                    count++;
                                    flag=true;
                                    break;
                                }
                        }
                    }
                }
            }
        }
        return count;

    }
};

class Solution {
public:
    int minimumTotal(vector<vector<int>>& triangle) {
        int ans,m=triangle.size();
        if(m==1)
        {
            return triangle[0][0];
        }
        for(int i=1;i<m;i++)
        {
            for(int j=0;j<=i;j++)
            {
                if(j==0)
                    triangle[i][j]+=triangle[i-1][j];
                else if(j==i)
                    triangle[i][j]+=triangle[i-1][j-1];
                else
                {
                    if(triangle[i-1][j-1]>triangle[i-1][j])
                    {
                        triangle[i][j]+=triangle[i-1][j-1];
                    }
                    else
                    {
                        triangle[i][j]+=triangle[i-1][j];
                    }
                }
            }
        }

        sort(triangle[m-1].begin(),triangle[m-1].end());
        return triangle[m-1][0];

    }
};

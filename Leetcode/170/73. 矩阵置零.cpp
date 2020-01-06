class Solution {
public:
    void setZeroes(vector<vector<int>>& matrix) {
        stack<int> x,y;
        int m=matrix.size(),n=matrix[0].size();
        if(m==0||n==0)
            return;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(matrix[i][j]==0)
                {
                    x.push(i);
                    y.push(j);
                }
            }
        }

        while(!x.empty())
        {
            int newx=x.top(),newy=y.top();
            x.pop(),y.pop();
            for(int i=0;i<m;i++)
            {
                matrix[i][newy]=0;
            }
            for(int j=0;j<n;j++)
            {
                matrix[newx][j]=0;
            }
        }

    }
};

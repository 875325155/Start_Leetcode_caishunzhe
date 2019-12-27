class Solution {
public:
    int maximalSquare(vector<vector<char>>& matrix) {
        int ans=0;
        int m=matrix.size();
        int n = m > 0 ? matrix[0].length : 0;

        vector<vector<int> > f(m,vector<int>(n));
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(i==0||j==0)
                    f[i][j]=matrix[i][j]-'0';
                else if(matrix[i][j]=='0')
                    f[i][j]=0;
                else
                    f[i][j]=min(min(f[i-1][j],f[i][j-1]),f[i-1][j-1])+1;
                if(f[i][j]>ans)
                    ans=f[i][j];
            }

        }
        return ans*ans;

    }
};

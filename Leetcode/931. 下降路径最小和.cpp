class Solution {
public:
    int minFallingPathSum(vector<vector<int>>& A) {
        int len=A.size();
        for(int i=1;i<len;i++)
        {
            for(int j=0;j<len;j++)
            {
                if(j==0)
                {
                    A[i][j]+=min(A[i-1][j],A[i-1][j+1]);
                }
                else if(j==len-1)
                {
                    A[i][j]+=min(A[i-1][j],A[i-1][j-1]);
                }
                else
                {
                    A[i][j]+=min(min(A[i-1][j],A[i-1][j-1]),A[i-1][j+1]);
                }

            }
        }
        sort(A[len-1].begin(),A[len-1].end());
        return A[len-1][0];
    }
};

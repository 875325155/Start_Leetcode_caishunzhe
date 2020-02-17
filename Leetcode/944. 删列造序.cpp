class Solution {
public:
    int minDeletionSize(vector<string>& A) {
        if(A.size()==1)
            return 0;
        int ans=0,m=A.size(),n=A[0].size();
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<m-1;j++)
            {
                if(A[j][i]>A[j+1][i])
                {
                    ans++;
                    break;
                }
            }
        }
        return ans;



    }
};

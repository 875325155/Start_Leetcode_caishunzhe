class Solution {
public:
    int findCircleNum(vector<vector<int>>& M) {
        int count=0,len=M.size();
        vector<int> data(len,0);
        for(int i=0;i<len;++i)
        {
            if(data[i]==0)
            {
                count++;
                bfs(data,M,i);
            }
        }
        return count;

    }

    void bfs(vector<int>&data,vector<vector<int> > M,int i)
    {
        for(int j=0;j<M.size();j++)
        {
            if(M[i][j]==1&&data[j]==0)
            {
                data[j]=1;
                bfs(data,M,j);
            }
        }

    }
};

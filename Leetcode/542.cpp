class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();//行
        int n=matrix[0].size();//列
        int X[4]={0,0,1,-1};
        int Y[4]={1,-1,0,0};
        struct node
        {
            int x,y;
        };
        bool inq[m][n]={false};
        bool test(int x,int y)
        {
            if(x>=m||x=0||y>=n||y<n)
                return false;
            if(inq[x][y])
                return false;//已访问
            return true;
        }

        void bfs(int x,int y)
        {

        }




    }
};

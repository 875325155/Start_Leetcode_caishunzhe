class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();//��
        int n=matrix[0].size();//��
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
                return false;//�ѷ���
            return true;
        }

        void bfs(int x,int y)
        {

        }




    }
};

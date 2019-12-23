class Solution {
public:
    vector<vector<int>> updateMatrix(vector<vector<int>>& matrix) {
        int m=matrix.size();
        int n=matrix[0].size();
        //bool flag[m][n]={false};
        int X[4]={0,0,-1,1};
        int Y[4]={1,-1,0,0};
        struct node
        {
            int x,y;
        }Node;
        queue<node> Q;
        for(int i=0;i<m;i++)
        {
            for(int j=0;j<n;j++)
            {
                if(!matrix[i][j])
                {
                    Node.x=i,Node.y=j;
                    Q.push(Node);
                }
                else
                {
                    matrix[i][j]=10000;
                }

            }
        }
        while(!Q.empty())
        {
            node t=Q.front();
            Q.pop();
            //flag[t.x][t.y]=true;
            for(int i=0;i<4;i++)
            {
                int newx=t.x+X[i];
                int newy=t.y+Y[i];
                if(newx>=0&&newx<m&&newy>=0&&newy<n)
                {
                    if(matrix[newx][newy]<matrix[t.x][t.y]+1)
                        {
                            matrix[newx][newy]=matrix[t.x][t.y]+1;
                            Node.x=newx,Node.y=newy;
                            Q.push(Node);
                            //flag[newx][newy]=true;
                        }
                }
            }
        }


    return matrix;
    }
};

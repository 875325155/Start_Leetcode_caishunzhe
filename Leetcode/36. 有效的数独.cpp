class Solution {
public:
    bool isValidSudoku(vector<vector<char>>& board) {
    //先按行
    for(int i=0;i<9;i++)
    {
        int data[10]={0};
        for(int j=0;j<9;j++)
        {
            if(board[i][j]!='.')
            {
                data[board[i][j]-'0']++;
                if(data[board[i][j]-'0']>1)
                    return false;
            }
        }
    }
    //再按列
    for(int i=0;i<9;i++)
    {
        int data[10]={0};
        for(int j=0;j<9;j++)
        {
            if(board[j][i]!='.')
            {
                data[board[j][i]-'0']++;
                if(data[board[j][i]-'0']>1)
                    return false;
            }
        }
    }

    //再分9块
    for(int b=0;b<7;b+=3)
    {
        for(int a=0;a<7;a+=3)
        {
            int data[10]={0};
            for(int i=b;i<3+b;i++)
            {
                for(int j=a;j<3+a;j++)
                {
                    if(board[i][j]!='.')
                    {
                        data[board[i][j]-'0']++;
                        if(data[board[i][j]-'0']>1)
                            return false;
                    }

                }
            }
        }
    }
    return true;

    }
};

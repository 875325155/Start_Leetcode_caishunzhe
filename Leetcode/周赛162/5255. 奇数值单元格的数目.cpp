#include<vector>
#include<cstdio>
using namespace std;
int oddCells(int n, int m, vector<vector<int>>& indices) {
    int count=0,a=0,b=0;
    int sx[55]={0},sy[55]={0};
    for(int i=0;i<indices.size();i++)
    {
        sx[indices[i][0]]+=1;
        sy[indices[i][1]]+=1;
        //printf("%d ",sx[indices[i][0]]);

    }

    for(int i=0;i<55;i++)
    {
        if(sx[i]%2!=0)
            {
                count+=m;
                a++;
            }
        if(sy[i]%2!=0)
            {
                count+=n;
                b++;
            }
    }




    if(a*b==n*m)
        count=0;
    else
        count=count-2*(a*b);
    return count;
}

int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    vector<vector<int>> indices={{1,1},{0,0}};
    int q=oddCells(n,m,indices);
    printf("%d",q);
    return 0;
}

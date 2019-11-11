#include<vector>
#include<cstdio>
using namespace std;
vector<vector<int> > reconstructMatrix(int upper, int lower, vector<int>& colsum)
{
    vector<vector<int> > s(2);
    int count=0;
    for(int j=0;j<colsum.size();j++)
    {
        count+=colsum[j];
    }
    if(count!=(upper+lower))
    {
        vector<vector<int> > s(0);
        return s;
    }
    else
    {
        for(int j=0;j<colsum.size();j++)
        {
            if(colsum[j]==0)
            {
               s[0].push_back(0);
               s[1].push_back(0);
            }
            else if(colsum[j]==2)
            {
               s[0].push_back(1);
               s[1].push_back(1);
               lower-=1;
               upper-=1;
            }
        }
        for(int j=0;j<colsum.size();j++)
        {
            if()
            if(upper>0)
            {
                s[0].push_back(1);
                s[1].push_back(0);
                upper--;
                //printf("%d\n",upper);
            }
            else
            {
                s[0].push_back(0);
                s[1].push_back(1);
                lower--;
            }
        }
    }

    return s;

}


int main()
{
    int n,m;
    scanf("%d %d",&n,&m);
    vector<int> colsum={2,1,2,0,1,0,1,2,0,1};
    vector<vector<int> > q=reconstructMatrix( n,m ,colsum);
    for(int i=0;i<q.size();i++)
    {
        printf("fdd");
        for(int j=0;j<q[i].size();j++)
        {
            printf("%d ",q[i][j]);
        }
        printf("\n");
    }
    return 0;
}

#include<vector>
#include<cstdio>
using namespace std;
vector<vector<int>> reconstructMatrix(int upper, int lower, vector<int>& colsum) {
        vector<vector<int>> ans;
        vector<int>t1,t2;
        int n=colsum.size();
        for(int i=0;i<n;i++){
            if(colsum[i]==0)
            {
                t1.push_back(0);
                t2.push_back(0);
            }
            else if(colsum[i]==1){
                if(upper>lower){
                    t1.push_back(1);
                    t2.push_back(0);
                    upper--;
                }
                else {t2.push_back(1);
                      t1.push_back(0);
                      lower--;}
            }
            else if(colsum[i]==2){
                t1.push_back(1);
                t2.push_back(1);
                upper--;
                lower--;
            }

        }
        if(upper!=0||lower!=0)
        return ans;
        else {
            ans.push_back(t1);
            ans.push_back(t2);

        }
        return ans;
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

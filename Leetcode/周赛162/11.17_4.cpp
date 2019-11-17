#include<cstdio>
#include<algorithm>
using namespace std;

struct city
{
    char name[100];
    double g1,g2,g3;
    double gdp;
    double ans;
}City[1005];

int cmp1(city a,city b)
{
    return a.gdp<b.gdp;
}

int cmp2(city a,city b)
{
    return a.ans<b.ans;
}

int main()
{
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%s %lf %lf %lf",&City[i].name,&City[i].g1,&City[i].g2,&City[i].g3);
        City[i].gdp=City[i].g1+City[i].g2+City[i].g3;
        City[i].ans=City[i].g3/City[i].gdp;
    }
    sort(City,City+n,cmp1);
    printf("%s ",City[n-1].name);
    sort(City+n-3,City+n,cmp2);
    printf("%s",City[n-1].name);

    return 0;
}

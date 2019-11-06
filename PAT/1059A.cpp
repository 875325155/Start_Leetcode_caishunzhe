#include<cstdio>
#include<cmath>
using namespace std;
const int maxn=100005;
int prime[maxn];
bool p[maxn]={0};
int index=0;
void Find_num(void)
{
    for(int i=2;i<maxn;i++)
    {
        if(p[i]==false)
        {
            prime[index++]=i;
            for(int j=2*i;j<maxn;j+=i)
                p[j]=true;
        }
    }
}

struct alpha
{
    //a -> ����
    //b -> ������ϵ��
    int a,b;
}canshu[10];
int main()
{
    //�ҵ����е�����
    Find_num();
    //sum���治ͬ���ӵ���Ŀ
    int n,sum=0;
    scanf("%d",&n);
    if(n==1)
        printf("1=1");
    else
    {
        printf("%d=",n);
        int sqt=int(sqrt(1.0*n));
        for(int i=0;i<index&&prime[i]<=sqt;i++)
        {
            if(n%prime[i]==0)
            {
                canshu[sum].a=prime[i];
                canshu[sum].b=0;
                while(n%prime[i]==0)
                {
                    canshu[sum].b++;
                    n/=prime[i];
                }
                sum++;
            }
            //�����Ѿ��������
            if(n==1)
            {
                break;
            }
        }
        if (n!=1)
        {
            canshu[sum++].a=n;
            canshu[sum].b=1;
        }
        for(int i=0;i<sum;i++)
        {
            if(i>0)
                printf("*");
            printf("%d",canshu[i].a);
            if(canshu[i].b>1)
                printf("^%d",canshu[i].b);
        }
    }

    return 0;
}



#include<cstdio>
#include<cmath>
using namespace std;
int data[1005]={0};
int main()
{
    //int a;
    //scanf("%d",&a);
    data[1]=0;
    for(int k=2;k<1002;k++)
       data[k]=k;
    for(int i=2;i<1002;i++)
    {

            int t=1+data[i];//¸´ÖÆ
            int p=1;//Õ³Ìù
            for(int j=2*i;j<1002;j+=i)
            {
                int cmp=t+p;
                if(cmp<data[j])
                    data[j]=cmp;
                p++;
            }

    }
    for(int k=1;k<1002;k++)
        printf("%d\n",data[k]);
}

#include<cstdio>
#include<cmath>
using namespace std;

bool isprime(int number)
{
    if(number == 1)
        return false;

    for(int j=2;j<=sqrt(number);j++)
        if(number / j * j == number)
            return false;
    return true;
}

bool isdoublenum(int n)
{
    if(n % 2 == 0)
        return true;
    return false;
}

int main()
{
    int N;
    int i1 = 0,i2 = 0;
    scanf("%d",&N);
    int a[100000],b[10000],c[10000];
    for(int i = 0; i < N; i++)
        scanf("%d",&a[i]);
    for(int i = 0; i < N; i++)
    {
        if(isprime(a[i]))
        {
            b[i1] = a[i];
            i1++;
        }
        if(isdoublenum(a[i]))
        {
            c[i2] = a[i];
            i2++;
        }
    }
    for(int i = 0; i < i1; i++)
        printf("%d ",b[i]);
    printf("\n");
    for(int i = 0; i < i2; i++)
        printf("%d ",c[i]);
    printf("\n");

    return 0;
}

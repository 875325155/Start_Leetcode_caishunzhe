#include<cstdio>
using namespace std;
int main()
{
    double n;
    scanf("%lf",&n);
    if(n<50)
    {
        printf("%.2f",n);
    }
    else
    {
        double s1=0.9*n;
        double s2=n-50.0;
        if(s1<=s2)
        {
            printf("%.2f",s1);
        }
        else
        {
            printf("%.2f",s2);
        }

    }
    return 0;
}

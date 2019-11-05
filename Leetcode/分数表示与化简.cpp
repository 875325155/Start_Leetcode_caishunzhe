/*
test
1.
3/18
->1/6
2.
18/3
->6
3.
16/3
5 1/3
4.
-5/2
5.
15/-12
*/
#include<cstdio>
#include<cstdlib>
#include<algorithm>
using namespace std;

struct fen
{
    int up,down;
};
int gcd(int a,int b)
{
    if(a<b)
    {
        swap(a,b);
    }
    if(b==0)
        return a;
    else
        return gcd(b,a%b);
}

void yuefen(fen& a)
{
    if(a.down<0)
    {
        a.down=-a.down;
        a.up=-a.up;
    }
    if(a.up==0)
    {
        a.down=1;
    }
    else
    {
        bool s=false;
        //¿¼ÂÇ¸ºÊý£¬Èç-3/6
        //int m=gcd(a.up,a.down);

        if(a.up<0)
        {
            a.up=(-a.up);
            s=true;
        }
        int m=gcd(a.up,a.down);
        a.down/=m;
        if(s)
        {
            a.up=-(a.up/m);
        }
        else
            a.up/=m;
    }
}
int main()
{
    fen a;
    scanf("%d/%d",&a.up,&a.down);
    yuefen(a);
    printf("%d/%d",a.up,a.down);
    return 0;
}

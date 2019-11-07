#include<cstdio>
#include<algorithm>
#include<cstdlib>
#include<cstring>
using namespace std;
struct bign
{
    int d[1000];
    int len;
    bign()
    {
        memset(d,0,sizeof(d));
        len=0;
    }
};

bign change(char str[])
{
    bign a;
    a.len=strlen(str);
    for(int i=0;i<a.len;i++)
    {
        a.d[i]=str[a.len-1-i]-'0';
    }
    return a;
}

int compare(bign a,bign b)
{
    //a>b
    if(a.len>b.len)
    {
        return 1;
    }
    else if(a.len<b.len)
    {
        return -1;
    }
    //从高位到低位进行比较
    else
    {
        for(int i=a.len-1;i>=0;i--)
        {
            if(a.d[i]>b.d[i])
                return 1;
            else if(a.d[i]<b.d[i])
                return -1;
        }
        //两数相等
        return 0;
    }
}

bign add(bign a,bign b)
{
    bign c;
    //进位
    int carry=0;
    for(int i=0;i<a.len||i<b.len;i++)
    {
        int tmp=a.d[i]+b.d[i]+carry;
        c.d[c.len++]=tmp%10;
        carry=tmp/=10;
    }
    if(carry!=0)
    {
        c.d[c.len++]=carry;
    }
    return c;
}

bign sub(bign a,bign b)
{
    bign c;
    for(int i=0;i<a.len||i<b.len;i++)
    {
        if(a.d[i]<b.d[i])
        {
            a.d[i+1]--;
            a.d[i]+=10;
        }
        c.d[c.len++]=a.d[i]-b.d[i];
    }
    while (c.len-1>=1&&c.d[c.len-1]==0)
        c.len--;
    return c;
}

void print(bign a)
{
    for(int i=a.len-1;i>=0;i--)
    {
        printf("%d",a.d[i]);
    }
    printf("\n");
}

int main()
{
    char str1[1000],str2[1000];
    scanf("%s\n%s",&str1,&str2);
    /*printf("%s",str1);
    printf("\n");
    printf("%s",str2);
    */
    bign a=change(str1);
    //print(a);
    bign b=change(str2);
    bign c=add(a,b);
    print(c);
    c=sub(a,b);
    print(c);
    return 0;
}

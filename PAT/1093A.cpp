#include<cstdio>
#define PAT 1000000007
using namespace std;

int main()
{
    char s[100005];
    scanf("%s",s);
    int count_p=0,count_t=0,sum=0;
    for(int i=0;s[i]!='\0';i++)
    {
        //printf("%c\n",s[i]);
        if(s[i]=='T')
            count_t++;
    }
    //APPAPATT
    //printf("%d",count_t);
    for(int i=0;s[i]!='\0';i++)
    {
        if(s[i]=='T')
            count_t--;
        else if(s[i]=='P')
            count_p++;
        else if(s[i]=='A')
        {
            sum=sum+count_p*count_t;
            sum%=PAT;
        }
    }
    printf("%d",sum);
    return 0;
}


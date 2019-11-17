#include<cstdio>
#include<cstdlib>
using namespace std;
int countc( char* str , char a ){
    int cnt = 0 ;
    for ( int i = 0 ; str[i]!='\0' ; i++)
        if ( str[i] == a )
            cnt++;
    return cnt ;
}
int main()
{
        int n ;
        scanf("%d",&n);
        char str[100] ;
        int ans = 0 ;
        for ( int i = 1 ; i<=n ; i++ )
        {
            sprintf(str,"%o",i);
            ans += countc(str,'7');
            //printf("%d\n",ans);
        }
        printf("%d\n",ans);
        return 0;
}

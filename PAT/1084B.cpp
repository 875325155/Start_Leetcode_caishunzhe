#include<iostream>
using namespace std;

int main()
{
    int n;
    string a,ans;
    cin>>a>>n;
    while(--n)
    {
        int cnt=0;
        string a_mid;
        char e=a[0];
        for(int i=0;i<a.size();i++)
        {
            if(a[i]==e)
                cnt++;
            else
            {
                a_mid+=e;
                a_mid+=(cnt+'0');
                cnt=1;
                e=a[i];
            }
        }
        if(cnt!=0)
        {
            a_mid+=e;
            a_mid+=(cnt+'0');
        }
        a=a_mid;
    }
    cout<<a;
    return 0;
}

#include<string>
#include<iostream>
using namespace std;

int n;
string deal(string s,int& e)
{
    //下标
    int k=0;
    while(s.length()>0&&s[0]=='0')
        s.erase(s.begin());
    //为0.xxx;
    if(s[0]=='.')
    {
        s.erase(s.begin());
        while(s.length()>0&&s[0]=='0')
        {
            s.erase(s.begin());
            e--;
        }
    }
    //有整数部分
    else
    {
        while(k<s.length()&&s[k]!='.')
        {
            k+=1;
            e++;
        }
        if(k<s.length())
        {
            //删除小数点
            s.erase(s.begin()+k);
        }
    }
    if(s.length()==0)
        e=0;
    int num=0;
    k=0;
    string res;
    while(num<n)
    {
        if(k<s.length())
            res+=s[k++];
        else
            res+='0';
        num++;
    }
    return res;
}

int main()
{
    string s1,s2,s3,s4;
    cin>>n>>s1>>s2;
    int e1=0,e2=0;
    s3=deal(s1,e1);
    s4=deal(s2,e2);
    if(s3==s4&&e1==e2)
    {
        cout<<"YES 0."<<s3<<"*10^"<<e1<<endl;
    }
    else
    {
        cout<<"NO 0."<<s3<<"*10^"<<e1<<" 0."<<s4<<"*10^"<<e2<<endl;
    }
}

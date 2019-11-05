/*
test
input:
13
1 6 33 18 4 0 10 5 12 7 2 9 3
output:
80
*/
#include<cstdio>
#include<cstdlib>
#include<ctime>
#include<algorithm>
using namespace std;

const int maxn=100010;
int A[maxn],n;
int randpartion(int A[],int left,int right)
{
    int p=(round(1.0*rand()/RAND_MAX*(right-left)+left));
    swap(A[p],A[left]);
    int temp=A[left];
    while(left<right)
    {
        while(left<right&&A[right]>temp)
            right--;
        A[left]=A[right];
        while(left<right&&A[left]<temp)
            left++;
        A[right]=A[left];
    }
    A[left]=temp;
    return left;
}

//随机选择算法
void rand_select(int A[],int left,int right,int k)
{
    if(left==right)
        return;
    int p=randpartion(A,left,right);
    int m=p-left+1;
    //找到了第K大的数
    if(k==m)
        return;
    if(k<m)
        rand_select(A,left,p-1,k);
    else
        rand_select(A,p+1,right,k-m);
}

int main()
{
    //随机初始化种子
    srand((unsigned)time(NULL));
    int sum=0,sum1=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        sum+=A[i];
    }
    rand_select(A,0,n-1,n/2);
    for(int i=0;i<n/2;i++)
    {
        sum1+=A[i];
    }
    printf("%d\n",(sum-2*sum1));
    return 0;
}


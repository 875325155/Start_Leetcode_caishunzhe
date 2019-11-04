#include<cstdio>
using  namespace std;
/*
问题描述：
有N个木头，长度给出，现需要将其分为至少K根长度相等的木头，
问此条件下长度最长为多少？
*/

/*
DataSet
1.
3
10 24 15
7
ans:
6

2.
3
2 5 6
3
ans:
3
*/
//分析之，我们知道这是一个可以利用二分法的问题，只要寻找到
//某个L，使得k<K,再将L-1即可
int upper_stick(int A[],int left,int right,int x,int n)
{
    int mid;
    while(left<right)
    {
        mid=(left+right)/2;
        int sum=0;
        for(int i=0;i<n;i++)
        {
            sum+=(A[i]/mid);
        }
        if(sum<x)
            right=mid;
        else
            left=mid+1;
    }
    return left;
}

int main()
{
    int n,A[1005],k,max_stick=-1;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
        if(A[i]>max_stick)
            max_stick=A[i];
    }
    scanf("%d",&k);
    printf("%d",(upper_stick(A,1,max_stick,k,n)-1));
    return 0;
}

//从N个整数之中取K个数

/**
测试样例
4 2
2 3 3 4
**/
#include<cstdio>
#include<vector>
using namespace std;

const int maxn=30;
int n,k,x,maxSumSqu=-1,A[maxn];
vector<int> temp,ans;

void DFS(int index,int nowK,int sum,int sumSqu)
{
    //找到k个值之和为x
    if(nowK==k&&sum==x)
    {
        if(sumSqu>maxSumSqu)
        {
            maxSumSqu=sumSqu;
            ans=temp;
            //printf("%d\n",maxSumSqu);
        }
        return;
    }
    if(index==n||nowK>k||sum>x)
        return;
    //选第k个数
    temp.push_back(A[index]);
    DFS(index+1,nowK+1,sum+A[index],sumSqu+A[index]*A[index]);
    temp.pop_back();


    //不选第k个数
    DFS(index+1,nowK,sum,sumSqu);
}

int main()
{
    scanf("%d %d",&n,&k);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&A[i]);
    }


    DFS(0,0,0,0);
    printf("maxsum is:\n");
    for(int i=0;i<ans.size();i++)
        printf("%d\n",ans[i]);
    printf("maxsum's squaresum is: %d\n",maxSumSqu);
    return 0;


}


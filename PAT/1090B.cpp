#include<cstdio>
#include<map>
#include<vector>
using namespace std;
map<int,vector<int>> s;
int main()
{
    int n,m,a,b;
    scanf("%d %d",&n,&m);
    for(int i=0;i<n;i++)
    {
        scanf("%d %d",&a,&b);
        s[a].push_back(b);
        s[b].push_back(a);
    }
    while(m--)
    {
        //d->输入的值
        int c,ans[100005]={0};
        scanf("%d",&c);
        vector<int> goods(c);
        for(int i=0;i<c;i++)
        {
            scanf("%d",&goods[i]);
            //代表货物存在
            ans[goods[i]]=1;
        }
        bool flag=1;
        for(int i=0;i<goods.size();i++)
        {
            for(int j=0;j<s[goods[i]].size();j++)
            {
                //有冲突物品
                if(ans[s[goods[i]][j]]==1)
                {
                    flag=0;
                    break;
                }
            }
            if(flag==0)
                break;
        }
        if(flag)
            printf("Yes\n");
        else
            printf("No\n");


    }
    return 0;
}

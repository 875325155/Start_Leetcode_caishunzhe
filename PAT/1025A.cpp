#include<cstdio>
#include<algorithm>
#include<iostream>
#include<cstring>
using namespace std;
struct student
{
    char id[15];
    int score;
    int local_num;
    int local_rank;
    int whole_rank;
}stu[30001];
//比较函数
bool cmp(student a,student b)
{
    if(a.score!=b.score)
        return a.score>b.score;
    else
        return strcmp(a.id,b.id)<0;
}


int main()
{
    int n,k,num=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&k);
        for(int j=0;j<k;j++)
        {
            scanf("%s %d",&stu[num].id,&stu[num].score);
            stu[num].local_num=i+1;
            //num为总人数
            num++;
        }
        //对每个考场的人进行排列
        sort(stu+num-k,stu+num,cmp);
        /*
        //a test
        for(int l=num-k;l<num;l++)
            printf("%s %d %d\n",stu[l].id,stu[l].score,stu[l].local_num);
        */
        stu[num-k].local_rank=1;
        int count_local=1;
        for(int l=num-k+1;l<num;l++)
        {
            count_local++;
            if(stu[l].score==stu[l-1].score)
                stu[l].local_rank=stu[l-1].local_rank;
            else
                stu[l].local_rank=count_local;
        }
        /*
        //a test
        for(int l=num-k;l<num;l++)
            printf("%s %d %d %d\n",stu[l].id,stu[l].score,stu[l].local_num,stu[l].local_rank);
        */
    }
    printf("%d\n",num);
    //对所有人进行排序
    sort(stu,stu+num,cmp);
    stu[0].whole_rank=1;
    printf("%s %d %d %d\n",stu[0].id,stu[0].whole_rank,stu[0].local_num,stu[0].local_rank);
    int count_whole=2;
    for(int l=1;l<num;l++)
    {

        if(stu[l].score==stu[l-1].score)
            stu[l].whole_rank=stu[l-1].whole_rank;
        else
            stu[l].whole_rank=count_whole;
        count_whole++;
        printf("%s %d %d %d\n",stu[l].id,stu[l].whole_rank,stu[l].local_num,stu[l].local_rank);
    }
    return 0;
}

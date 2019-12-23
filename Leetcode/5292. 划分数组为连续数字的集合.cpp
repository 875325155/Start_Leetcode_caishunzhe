#include<cstdio>
#include<vector>
#include<map>
using namespace std;

bool isPossibleDivide(vector<int>& nums, int k) {
    int len=nums.size();
    if(len%k!=0)
        return false;
    else
    {
        map<int,int> s;
        for(int i=0;i<len;i++)
        {
            s[nums[i]]++;
        }
        map<int,int>::iterator it;
        int count=0;
        for(it=s.begin();it!=s.end();it++)
        {

            int start_key=it->first,start_value=it->second;
            printf("%d hh\n",start_key);
            if(start_value!=0)
            {
                count++;
                for(int i=1;i<k;i++)
                {
                    if(s.find(start_key+i)==s.end())
                    {
                        return false;
                    }
                    if(s[start_key+i-1]>s[start_key+i])
                        return false;
                }
                for(int i=0;i<k;i++)
                {
                    s[start_key+i]-=s[start_key];
                }
                if(count==len-k+1)
                    break;
            }
        }
        return true;

    }
}


int main()
{
    int k;
    scanf("%d",&k);
    vector<int> nums;
    for(int i=0;i<8;i++)
    {
        int s;
        scanf("%d",&s);
        nums.push_back(s);
    }
    bool ans=isPossibleDivide(nums,k);
    printf("%d",ans);
    return 0;
}

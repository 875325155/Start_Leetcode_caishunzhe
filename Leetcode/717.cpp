#include<cstdio>
#include<vector>

using namespace std;
bool isOneBitCharacter(vector<int>& bits) {
    int len=bits.size();
    if(bits[len-1])
        return 0;
    else
    {
        int i=0;
        while(i<(len-1))
        {
            if(bits[i])
                i+=2;
            else
                i++;
        }
        return (i==len-1);
    }
}

int main()
{
    int n;
    scanf("%d",&n);
    vector<int> s(n);
    for(int i=0;i<n;i++)
    {
        scanf("%d",&s[i]);
    }
    bool data=isOneBitCharacter(s);
    printf("%d\n",data);
    return 0;
}

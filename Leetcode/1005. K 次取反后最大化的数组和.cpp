#include<vector>
#include<iostream>
#include<algorithm>
using namespace std;
int largestSumAfterKNegations(vector<int>& A, int K) {
    int ans=0,flag=0;
    sort(A.begin(),A.end());
    for(int i=0;i<A.size()-1;i++)
    {
        if(A[i]<0)
        {
            flag++;
        }
        else
            break;
    }
    if(K<=flag)
    {
        for(int i=0;i<A.size();i++)
        {
            if(i<K)
                ans+=-1*A[i];
            else
                ans+=A[i];
        }
        return ans;
    }
    else
    {
        for(int i=0;i<A.size();i++)
        {
            if(i<flag)
                ans+=-1*A[i];
            else
                ans+=A[i];
        }
        int p;
        if(flag==A.size())
        {
            p=abs(A[flag-1]);
            cout<<"I love "<<p<<endl;
        }
        else if(flag<=1)
        {
            p=abs(A[0]);
        }
        else
        {
            p=min(abs(A[flag-1]),abs(A[flag]));
        }
        K-=flag;
        cout<<"hehe"<<K<<endl;
        cout<<"ans is "<<ans<<endl;
        if(K%2!=0)
        {
            ans-=2*p;
        }
        return ans;


    }


    return ans;
}

int main()
{
    vector<int> A={5,6,9,-3,3};
    int K=2;
    cout<<largestSumAfterKNegations(A,K);
    return 0;
}


//Ë¼Â·£ºdp
class Solution {
    static bool cmp(pair<int,int> a,pair<int,int> b)
    {
        return a.first<b.first;
    }
public:
    int maxJumps(vector<int>& arr, int d) {
        int n=arr.size();
        vector<pair<int,int> > temp;
        vector<int> dp(n,0);
        int res=1;
        for(int i=0;i<arr.size();i++)
        {
            temp.push_back(make_pair(arr[i],i));
        }
        sort(temp.begin(),temp.end(),cmp);

        for(int i=0;i<n;i++)
        {
            int index=temp[i].second;
            dp[index]=1;
            //×ó
            for(int j=index-1;j>=index-d&&j>=0;j--)
            {
                if(arr[j]>=arr[index])
                    break;


                dp[index]=max(dp[index],dp[j]+1);

            }
            //ÓÒ
            for(int j=index+1;j<=index+d&&j<n;j++)
            {
                if(arr[j]>=arr[index])
                    break;

                dp[index]=max(dp[index],dp[j]+1);

            }
            res=max(res,dp[index]);
        }
        return res;

    }
};

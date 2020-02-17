class Solution {
public:
    int minJumps(vector<int>& arr) {
       int n=arr.size();
       vector<int> dis(n,INT_MAX);
       vector<int> vis(n,0);
       unordered_map<int,vector<int> > m;
       for(int i=0;i<n-1;i++)
       {
           m[arr[i]].push_back(i);
       }

       dis[n-1]=0;
       queue<int> q;
       q.push(n-1);

       while(!q.empty())
       {
           int u=q.front();
           q.pop();
           if(u-1>=0&&!vis[u-1]&&m.find(arr[u-1])!=m.end())
           {
               dis[u-1]=min(dis[u-1],dis[u]+1);
               vis[u-1]=1;
               q.push(u-1);
           }

           if(u+1<n&&!vis[u+1]&&m.find(arr[u+1])!=m.end())
           {
               dis[u+1]=min(dis[u+1],dis[u]+1);
               vis[u+1]=1;
               q.push(u+1);
           }

           if(m.find(arr[u])!=m.end())
           {
               for(int v:m[arr[u]])
               {
                   if(!vis[v])
                   {
                       vis[v]=1;
                       dis[v]=min(dis[u]+1,dis[v]);
                       q.push(v);
                   }
               }
               m.erase(arr[u]);
           }
           return dis[0];

       }



    }
};

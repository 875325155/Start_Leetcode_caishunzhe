class Solution {
public:
    bool isPossible(vector<int>& target) {
        if(target.size()==1)
        {
            if(target[0]==1)
                return true;
            else
                return false;
        }
    priority_queue<int> q;
    long long s=0;
    for(int i=0;i<target.size();++i)
    {
        q.push(target[i]);
        s+=target[i];
    }
    while(1)
    {
        if(q.top()==1)
            return true;
        long long p=q.top();
        q.pop();
        if(q.top()==1)//如果第二小为1
        {
            if((p-1)%(s-p)==0)
                return true;
            else
                return false;
        }
        else
        {
            long long n=(n-q.top())/(s-p)+1;
            long long x=p-(s-p)*n;
            s=p-(s-p)*(n-1);
            if(x<=0)
                return false;
            q.push(x);
        }
    }
    return false;
    }
};

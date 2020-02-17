const int MAX=1e5+1;
class Solution {

public:
    const bool cmp(const vector<int>& e1,const vector<int>&e2)
    {
        return e1[1]<e2[1];
    }

    int maxEvents(vector<vector<int>>& events) {
        vector<vector<int> > left(MAX);
        for(int i=0;i<events.size();++i)
            left[events[i][0]].emplace_back(i);
        int ans=0;
        priority_queue<int,vector<int>,greater<int> >pq;
        for(int i=0;i<MAX;++i)
        {
            for(int j:left[i])
                pq.push(events[j][1]);
            while(!pq.empty()&&pq.top()<i)
                pq.pop();
            if(!pq.empty())
            {
                pq.pop();
                ans++;
            }
            return ans;

        }

    }
};

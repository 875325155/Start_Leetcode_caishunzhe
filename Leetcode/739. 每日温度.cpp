class Solution {
public:
    vector<int> dailyTemperatures(vector<int>& T) {
        int len=T.size();
        vector<int> ans(len,0);
        stack<int> data;
        for(int i=0;i<T.size();++i)
        {
            while(!data.empty()&&T[i]>T[data.top()])
            {
                int t=data.top();
                data.pop();
                ans[t]=i-t;
            }
            data.push(i);
        }
        return ans;


        //return ans;
    }
};

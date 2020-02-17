class Solution {
public:
    bool validateStackSequences(vector<int>& pushed, vector<int>& popped) {
        stack<int> data;
        int j=0;
        for(int i=0;i<pushed.size();++i)
        {
            data.push(pushed[i]);
            while(data.top()==popped[j])
            {
                j++;
                data.pop();
            }
        }
        while(!data.empty()&&j<popped.size())
        {
            if(data.top()==popped[j])
            {
                j++;
                data.pop();
            }
            else
                return false;
        }
        return true;
    }
};

class Solution {
public:
    int calPoints(vector<string>& ops) {
        vector<int> data;
        for(int i=0;i<ops.size();i++)
        {
            if(ops[i]=="+")
            {
                int len=data.size();
                data.push_back(data[len-2]+data[len-1]);
            }
            else if (ops[i]=="D")
            {
                int len=data.size();
                int q=data[len-1];
                data.push_back(q*2);
            }
            else if(ops[i]=="C")
            {
                data.pop_back();
            }
            else
            {
                int ball=stoi(ops[i]);
                data.push_back(ball);
            }
        }
        int ans=0;
        for(int i=0;i<data.size();i++)
        {
            ans+=data[i];
        }
        return ans;
    }
};

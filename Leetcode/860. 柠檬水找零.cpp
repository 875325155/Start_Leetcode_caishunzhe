class Solution {
public:
    bool lemonadeChange(vector<int>& bills) {
        int data[3]={0};
        int ans=0;
        for(int i=0;i<bills.size();i++)
        {
            data[bills[i]/10]++;
            if(bills[i]==10)
            {
                if(data[0]>0)
                {
                    data[0]--;
                }
                else
                    return false;
            }
            else if(bills[i]==20)
            {
                if(data[1]>0&&data[0]>0)
                {
                    data[1]--;
                    data[0]--;
                }
                else if(data[0]>=3&&data[1]==0)
                {
                    data[0]-=3;
                }
                else
                    return false;
            }
        }
        return true;
    }
};

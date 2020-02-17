class Solution {
public:
    int minCostToMoveChips(vector<int>& chips) {
        int ans=0;
        if(chips.size()==1)
            return 0;
        sort(chips.begin(),chips.end());
        int a=0,b=0;
        for(int i=0;i<chips.size();i++)
        {
            if(chips[i]%2==0)
                a++;
            else
                b++;
        }
        return min(a,b);



    }
};

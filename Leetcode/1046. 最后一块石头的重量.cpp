class Solution {
public:
    int lastStoneWeight(vector<int>& stones) {
        if(stones.size()==1)
            return stones[0];
        int len=stones.size();
        sort(stones.begin(),stones.end());
        while(stones[len-2]>0)
        {
            stones[len-1]-=stones[len-2];
            stones[len-2]=0;
            sort(stones.begin(),stones.end());
        }
        return stones[len-1];

    }
};

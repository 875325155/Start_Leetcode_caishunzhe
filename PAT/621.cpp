class Solution {
public:
    int leastInterval(vector<char>& tasks, int n) {
        int ins[26]={0};
        int count=tasks.size();
        for(int i=0;i<tasks.size();i++)
        {
                ins[tasks[i]-'A']++;
        }
        if(n==0)
            return count;
        while(1)
        {
            sort(ins,ins+26,reverse);
            if(ins[n])
                for(int i=0;i<=n;i++)
                    ins[i]-=ins[n]
            else
            {
                int tmp=0;
                for(int i=0;i<=n;i++)
                    tmp+=ins[i];
                return count+tmp;
            }
        }
    }
};

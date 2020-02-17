class Solution {
public:
    struct ans
    {
        int num;
        int solider;
    };
    static bool cmp(ans a,ans b)
    {
        if(a.solider!=b.solider)
            return a.solider<b.solider;
        else
            return a.num<b.num;
    }

    vector<int> kWeakestRows(vector<vector<int>>& mat, int k) {
        int m=mat.size();//ÐÐ
        int n=mat[0].size();//ÁÐ
        vector<ans> data(m);
        for(int i=0;i<m;i++)
        {
            int q=0;
            for(int j=0;j<n;j++)
            {
                q+=mat[i][j];
            }
            data[i].solider=q;
            data[i].num=i;
        }
        sort(data.begin(),data.end(),cmp);
        vector<int> answer;
        for(int i=0;i<k;i++)
            answer.push_back(data[i].num);
        return answer;

    }
};

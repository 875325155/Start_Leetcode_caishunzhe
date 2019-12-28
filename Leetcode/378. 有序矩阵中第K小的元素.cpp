class Solution {
public:
    int kthSmallest(vector<vector<int>>& matrix, int k) {
        int n=matrix.size(),count=0;
        vector<int> data(n*n);
        for(int i=0;i<n;i++)
        {
            for(int j=0;j<n;j++)
            {
                data[count++]=matrix[i][j];
            }
        }
        sort(data.begin(),data.end());
        return data[n*n-k];
    }
};

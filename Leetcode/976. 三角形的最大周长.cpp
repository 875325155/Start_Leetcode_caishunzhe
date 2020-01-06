class Solution {
public:
    int largestPerimeter(vector<int>& A) {
        sort(A.begin(),A.end());
        int a,b,c;
        for(int i=A.size()-1;i>=2;i--)
        {
            a=A[i],b=A[i-1],c=A[i-2];
            if(a<b+c)
                return a+b+c;
        }
        return 0;


    }
};

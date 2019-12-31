class Solution {
public:
    int count(int n)
    {
        int sum=0;
        while(n>0)
        {
            int q=n%10;
            sum+=q*q;
            n/=10;
        }
        return sum;
    }
    bool isHappy(int n) {
        int fast=n,low=n;
        do{
            low=count(low);
            fast=count(fast);
            fast=count(fast);
        }while(low!=fast)

        return (low==1);

    }
};

class ProductOfNumbers {
public:
    vector<int> data;
    ProductOfNumbers() {

    }

    void add(int num) {
        data.push_back(num);
    }

    int getProduct(int k) {
        int ans=1,len=data.size();
        for(int i=len-k;i<len;++i)
            ans*=data[i];
        return ans;

    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */

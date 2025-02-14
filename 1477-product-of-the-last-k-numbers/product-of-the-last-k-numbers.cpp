class ProductOfNumbers {
public:
    vector<int>a;
    ProductOfNumbers() {
        a.clear();
    }
    
    void add(int num) {
        a.push_back(num);
    }
    
    int getProduct(int k) {
        int size=a.size();
        int ans=1;
        for(int j=size-1;j>=0 & k>0;j--)
        {
            ans*=a[j];
            k--;
        }
        return ans;
    }
};

/**
 * Your ProductOfNumbers object will be instantiated and called as such:
 * ProductOfNumbers* obj = new ProductOfNumbers();
 * obj->add(num);
 * int param_2 = obj->getProduct(k);
 */
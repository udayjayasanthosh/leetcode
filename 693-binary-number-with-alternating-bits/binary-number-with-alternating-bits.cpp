class Solution {
public:
    bool hasAlternatingBits(int n) {
        int a=n&1;
        n=n>>1;
        while(n>0)
        {
            int b=n&1;
            if(b==a)
            return false;
            a=b;
            n=n>>1;
        }
        return true;
    }
};
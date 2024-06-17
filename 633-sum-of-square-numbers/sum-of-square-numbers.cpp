class Solution {
public:
    bool judgeSquareSum(int c) {
        int a=sqrt(c);
        for(int j=a;j>=0;j--)
        {
            int b=j*j;
            int d=c-b;
            d=sqrt(d);
            if((d*d)+b==c)
            return true;
        }
        return false;
    }
};
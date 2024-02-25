class Solution {
public:
    void fun(int bottle,int exchange,int &count,int rem)
    {
        count+=bottle;
        cout<<bottle<<" "<<rem;
        if(bottle+rem<exchange)return;
        int r=(bottle+rem)%exchange;
        bottle=(bottle+rem)/exchange;
        fun(bottle,exchange,count,r);
    }
    int numWaterBottles(int numBottles, int numExchange) {
        int c=0;
        fun(numBottles,numExchange,c,0);
        return c;
    }
};
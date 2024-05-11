class Solution {
public:
    int countBalls(int lowLimit, int highLimit) {
        unordered_map<int,int>mp;
        int a=0;
        // int c=0;
        for(int i=lowLimit;i<=highLimit;i++)
        {
            int j=i;
            int sum=0;
            while(j>0)
            {
                sum+=j%10;
                j=j/10;
            }
            mp[sum]++;
            // cout<<sum<<" "<<mp[sum]<<endl;
            if(mp[sum]>a)
            {
                a=mp[sum];
            }
        }
        return a;
    }
};
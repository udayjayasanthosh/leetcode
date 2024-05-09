class Solution {
public:
    long long maximumHappinessSum(vector<int> happiness, int k) {
        long long a=0;
        sort(happiness.rbegin(),happiness.rend());
        for(int i=0;i<k;i++)
        {
            int h=happiness[i]-i;
            // cout<<h<<" ";
            if(h>0)
            a+=h;
        }
        return a;
    }
};
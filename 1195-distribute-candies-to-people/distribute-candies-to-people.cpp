class Solution {
public:
    vector<int> distributeCandies(int candies, int n) {
        vector<int>v(n,0);
        int i=0;
        int j=1;
        while(candies>=0)
        {
            if(i>=n)
            {
                i=0;
            }
            if(candies<j)
            {
            v[i]+=candies;
            }
            else
            {
            v[i]+=j;
            }
            candies-=j;
            i++;
            j++;
        }
        return v;
    }
};
class Solution {
public:
    vector<int> findMissingAndRepeatedValues(vector<vector<int>>& grid) {
        unordered_map<int,int>mp;
        int max=0;
        for(auto i:grid)
        {
            for(auto j:i)
            {
                mp[j]++;
                if(j>max)
                max=j;
            }
        }
        int b=0;
        int a=0;
        for(int i=1;i<=max;i++)
        {
            if(mp[i]==0)
            {
                b=i;
            }
            else if(mp[i]==2){
                a=i;
            }
        }
        if(b==0)
        {
            b=max+1;
        }
        return {a,b};
    }
};
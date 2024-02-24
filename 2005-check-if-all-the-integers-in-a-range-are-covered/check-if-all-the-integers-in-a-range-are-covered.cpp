class Solution {
public:
    bool isCovered(vector<vector<int>>& ranges, int left, int right) {
        vector<int>v(right+1,0);
        for(auto i:ranges)
        {
            for(int j=i[0];j<=i[1];j++)
            {
                if(j<=right)
                {
                    v[j]=1;
                }
            }
        }
        for(int i=left;i<=right;i++)
        {
            if(v[i]==0)
            return false;
        }
        return true;

    }
};
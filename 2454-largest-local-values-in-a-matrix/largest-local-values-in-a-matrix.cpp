class Solution {
public:
    vector<vector<int>> largestLocal(vector<vector<int>>& grid) {
        vector<vector<int>>v;
        int row=grid[0].size();
        int col=grid.size();
        for(int i=0;i<=col-3;i++)
        {
            vector<int>a;
            for(int j=0;j<=row-3;j++)
            {
                int max=0;
                for(int k=i;k<i+3;k++)
                {
                    for(int l=j;l<j+3;l++)
                    {
                        if(max<grid[k][l])
                        max=grid[k][l];
                    }
                }
                a.push_back(max);
            }
            v.push_back(a);
        }
        return v;
    }
};
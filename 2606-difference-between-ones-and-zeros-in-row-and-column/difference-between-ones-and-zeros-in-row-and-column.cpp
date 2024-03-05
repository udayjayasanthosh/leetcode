class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>row1(grid.size(),0);
        vector<int>row0(grid.size(),0);
        vector<int>col1(grid[0].size(),0);
        vector<int>col0(grid[0].size(),0);
        for(int i=0;i<grid.size();i++)
        {
            int rowone=0,rowzero=0;
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0)
                {
                    row0[i]++;
                    col0[j]++;
                }
                else
                {
                    row1[i]++;
                    col1[j]++;
                }
            }
        }
        for(int i=0;i<grid.size();i++)
        {
            for(int j=0;j<grid[i].size();j++)
            {
                grid[i][j]=(row1[i]+col1[j]-row0[i]-col0[j]);
            }
        }
        return grid;
    }
};
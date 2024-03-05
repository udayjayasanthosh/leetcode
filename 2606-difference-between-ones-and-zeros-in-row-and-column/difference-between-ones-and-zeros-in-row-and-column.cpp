class Solution {
public:
    vector<vector<int>> onesMinusZeros(vector<vector<int>>& grid) {
        vector<int>row1;
        vector<int>row0;
        map<int,int>col1;
        map<int,int>col0;
        for(int i=0;i<grid.size();i++)
        {
            int rowone=0,rowzero=0;
            for(int j=0;j<grid[i].size();j++)
            {
                if(grid[i][j]==0)
                {
                    rowzero++;
                    col0[j]++;
                }
                else
                {
                    rowone++;
                    col1[j]++;
                }
            }
            row1.push_back(rowone);
            row0.push_back(rowzero);
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
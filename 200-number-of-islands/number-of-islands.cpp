class Solution {
public:
    void dfs(int i,int j,int &row,int &col,vector<vector<char>> &grid)
    {
        grid[i][j]='0';
        if(i+1<row and grid[i+1][j]=='1')
        dfs(i+1,j,row,col,grid);
        if(j+1<col and grid[i][j+1]=='1')
        dfs(i,j+1,row,col,grid);
        if(i-1>=0 and grid[i-1][j]=='1')
        dfs(i-1,j,row,col,grid);
        if(j-1>=0 and grid[i][j-1]=='1')
        dfs(i,j-1,row,col,grid);
    }
    int numIslands(vector<vector<char>> grid) {
        int iland=0;
        int row=grid.size();
        int col=grid[0].size();
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]=='1')
                {
                dfs(i,j,row,col,grid);
                iland++;
                }
            }
        }
        return iland;
    }
};
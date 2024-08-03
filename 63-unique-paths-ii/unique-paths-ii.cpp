class Solution {
public:
    int uniquePathsWithObstacles(vector<vector<int>> obstacle) {
        int row=obstacle.size();
        int col=obstacle[0].size();
        int mod=2000000000;
        if(obstacle[row-1][col-1]==1 or obstacle[0][0]==1) return 0; 
        for(int i=0;i<row;i++)
        {
            for(int j=0;j<col;j++)
            {
                if(obstacle[i][j]==1)
                obstacle[i][j]=-1;
            }
        }
        obstacle[row-1][col-1]=1;
        for(int i=row-1;i>=0;i--)
        {
            if(obstacle[i][col-1]==-1)
            break;
            else
            obstacle[i][col-1]=1;
        }
        for(int j=col-1;j>=0;j--)
        {
            if(obstacle[row-1][j]==-1)
            break;
            else
            obstacle[row-1][j]=1;
        }
        for(int i=row-2;i>=0;i--)
        {
            for(int j=col-2;j>=0;j--)
            {
                if(obstacle[i][j]!=-1)
                {
                if(i+1<row and obstacle[i+1][j]!=-1)
                {
                long a=obstacle[i+1][j]%mod;
                a+=obstacle[i][j];
                obstacle[i][j]=(a%mod);
                }
                if(j+1<col and obstacle[i][j+1]!=-1)
                {
                    long a=obstacle[i][j+1]%mod;
                    a+=obstacle[i][j];
                    obstacle[i][j]=(a%mod);
                }
                }
            }
        }
        return obstacle[0][0]%mod;
    }
};
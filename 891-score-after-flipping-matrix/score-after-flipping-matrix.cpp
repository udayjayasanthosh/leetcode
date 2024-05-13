class Solution {
public:
    int matrixScore(vector<vector<int>>& grid) {
        int row=grid.size();
        int col=grid[0].size();
        int s=0;
        unordered_map<int,int>mp;
        int sa=0;
        for(int i=0;i<col;i++)
        {
            sa+=pow(2,i);
        }
        for(int i=0;i<row;i++)
        {
            int a=0;
            int k=col-1;
            for(int j=0;j<col;j++)
            {
                if(grid[i][j]==1)
                {
                    a+=pow(2,k);
                }
                k--;
            }
            if(a<sa-a)
            {
                for(int j=0;j<col;j++)
                {
                    if(grid[i][j]==1)
                    grid[i][j]=0;
                    else
                    grid[i][j]=1;
                }
                mp[i]=sa-a;
            }
            else
            mp[i]=a;
        }
        sa=0;
        for(auto i:mp)
        {
            sa+=i.second;
        }
        for(int j=0;j<col;j++)
        {
            int k=pow(2,col-j-1);
            int x=sa;
            for(int i=0;i<row;i++)
            {
                if(grid[i][j]==0)
                x+=k;
                else
                x-=k;
            }
            if(x>sa)
            {
                for(int i=0;i<row;i++)
                {
                    if(grid[i][j]==0)
                    grid[i][j]=1;
                    else
                    grid[i][j]=0;
                }
                sa=x;
            }
        }
        for(int i=0;i<row;i++)
        {
            int k=0;
            for(int j=col-1;j>=0;j--)
            {
                if(grid[i][j]==1)
                {
                    s+=pow(2,k);
                }
                k++;
            }
            cout<<s<<endl;
        }
        return s;
    }
};
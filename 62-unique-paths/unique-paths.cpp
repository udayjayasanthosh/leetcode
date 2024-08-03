class Solution {
public:
    int uniquePaths(int m, int n) {
        vector<int>a(n,0);
        vector<vector<int>>v;
        for(int i=0;i<m;i++)
        v.push_back(a);
        // v[m-1][n-1]=1;
        for(int j=n-1;j>=0;j--)
        {
            v[m-1][j]=1;
        }
        for(int j=m-1;j>=0;j--)
        {
            v[j][n-1]=1;
        }
        for(int i=m-2;i>=0;i--)
        {
            for(int j=n-2;j>=0;j--)
            {
                if(j+1<n)
                v[i][j]+=v[i][j+1];
                if(i+1<m)
                v[i][j]+=v[i+1][j];
            }
        }
        // for(int i=0;i<m;i++)
        // {
        //     for(int j=0;j<n;j++)
        //     {
        //         cout<<v[i][j]<<" ";
        //     }
        //     cout<<endl;
        // }
        return v[0][0];
    }
};
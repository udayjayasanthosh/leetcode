class Solution {
public:
    void rotate(vector<vector<int>>& matrix) {
        int n=matrix.size();
        vector<vector<int>>v;
        for(int i=0;i<n;i++)
        {
            vector<int>a;
            for(int j=n-1;j>=0;j--)
            {
                a.push_back(matrix[j][i]);
            }
            v.push_back(a);
        }
        matrix=v;
    }
};
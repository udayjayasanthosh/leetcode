class Solution {
public:
    vector<int> luckyNumbers (vector<vector<int>>& matrix) {
        vector<int>v;
        unordered_set<int>s;
        for(int i=0;i<matrix.size();i++)
        {
            int  min=*min_element(matrix[i].begin(),matrix[i].end());
            s.insert(min);
        }
        int j=0;
        while(j<matrix[0].size())
        {
            int max=0;
            for(int i=0;i<matrix.size();i++)
            {
                if(matrix[i][j]>max)
                {
                    max=matrix[i][j];
                }
            }
            j++;
            if(s.find(max)!=s.end())
            v.push_back(max);
        }
        return v;
    }
};
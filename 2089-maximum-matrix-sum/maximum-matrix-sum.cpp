class Solution {
public:
    long long maxMatrixSum(vector<vector<int>>& matrix) {
        int row = matrix.size();
        int cols = matrix[0].size();
        int negcount=0;
        int neg=INT_MAX;
        long long totalsum=0;
        for (int i = 0; i < row; i++) {
            for (int j = 0; j < cols; j++) {
                if (matrix[i][j] < 0) {
                    negcount++;
                }
                int value=abs(matrix[i][j]);
                neg=min(neg,value);
                totalsum+=abs(matrix[i][j]);
            }
        }
        if(negcount%2==0)
        {
            return totalsum;
        }
        else
        {
            return totalsum-2ll*neg;
        }
    }
};
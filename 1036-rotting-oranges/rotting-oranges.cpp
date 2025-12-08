class Solution {
public:
    int orangesRotting(vector<vector<int>>& grid) {
        int row = grid.size();
        if (row == 0) return 0;
        int col = grid[0].size();

        queue<pair<int,int>> q;
        int fresh = 0;

        for (int i = 0; i < row; ++i) {
            for (int j = 0; j < col; ++j) {
                if (grid[i][j] == 2) q.push({i, j});
                else if (grid[i][j] == 1) ++fresh;
            }
        }

        if (fresh == 0) return 0; 

        int minutes = 0;
        int dirs[4][2] = {{1,0}, {-1,0}, {0,1}, {0,-1}};

        while (!q.empty()) {
            int sz = q.size();
            bool turned = false; 

            for (int k = 0; k < sz; ++k) {
                auto [i, j] = q.front();
                q.pop();

                for (auto &d : dirs) {
                    int ni = i + d[0];
                    int nj = j + d[1];
                    if (ni >= 0 && ni < row && nj >= 0 && nj < col && grid[ni][nj] == 1) {
                        grid[ni][nj] = 2;
                        q.push({ni, nj});
                        --fresh;
                        turned = true;
                    }
                }
            }

            if (turned) ++minutes;
        }

        return (fresh == 0) ? minutes : -1;
    }
};

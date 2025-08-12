class Solution {
public:
    int maxIncreaseKeepingSkyline(vector<vector<int>>& grid) {
        int n = grid.size();
        int res = 0;
        auto get_new = [&](int x, int y){
            int max1 = -1, max2 = -1;
            for (int i=0; i<n; ++i) {
                max1 = max(max1, grid[i][y]);
            }
            for (int j=0; j<n; ++j) {
                max2 = max(max2, grid[x][j]);
            }
            return min(max1, max2);
        };
        for (int i=0; i<n; ++i) {
            for (int j=0; j<n; ++j) {
                res += get_new(i, j) - grid[i][j];
            }
        }
        return res;
    }
};

class Solution {
public:
    int a(vector<vector<int>>& grid, vector<vector<int>>& dp, int n, int m) {
        if (n < 0 || m < 0)
            return 1e9;

        if (n == 0 && m == 0)
            return grid[0][0];

        if (dp[n][m] != -1)
            return dp[n][m];

        int up = a(grid, dp, n - 1, m);
        int left = a(grid, dp, n, m - 1);

        return dp[n][m] = grid[n][m] + min(up, left);
    }

    int minPathSum(vector<vector<int>>& grid) {
        int n = grid.size();
        int m = grid[0].size();

        vector<vector<int>> dp(n, vector<int>(m, -1));

        return a(grid, dp, n - 1, m - 1);
    }
};
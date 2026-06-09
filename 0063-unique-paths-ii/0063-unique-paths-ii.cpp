class Solution {
public:
    vector<vector<int>> dp;

    int a(vector<vector<int>>& grid, int m, int n){

        if(m < 0 || n < 0){
            return 0;
        }

        if(grid[m][n] == 1){
            return 0;
        }

        if(m == 0 && n == 0){
            return 1;
        }

        if(dp[m][n] != -1){
            return dp[m][n];
        }

        return dp[m][n] =
            a(grid,m-1,n) +
            a(grid,m,n-1);
    }

    int uniquePathsWithObstacles(vector<vector<int>>& obstacleGrid) {

        int m = obstacleGrid.size();
        int n = obstacleGrid[0].size();

        dp.assign(m, vector<int>(n, -1));

        return a(obstacleGrid,m-1,n-1);
    }
};
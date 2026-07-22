class Solution {
public:
    int n, m;
    int a(vector<vector<int>>& grid, vector<vector<vector<int>>>& dp, int i,
          int j1, int j2) {
        if (j1 < 0 || j2 < 0 || j1 >= m || j2 >= m)
            return -1e9;
        if (dp[i][j1][j2] != -1)
            return dp[i][j1][j2];
        if (i == n - 1) {
            if (j1 == j2)
                return dp[i][j1][j1] = grid[i][j1];
            else
                return dp[i][j1][j2] = grid[i][j1] + grid[i][j2];
        }
        int maxi=INT_MIN;
        for(int d1=-1;d1<=1;d1++){
            
            for(int d2=-1;d2<=1;d2++){
                int value;
                if(j1==j2){
                    value=grid[i][j2];
                }
                else{
                    value=grid[i][j2]+grid[i][j1];
                }
                value+=a(grid,dp,i+1,j1+d1,j2+d2);
                maxi=max(maxi,value);
            }
        }
        return dp[i][j1][j2]=maxi;
    }
    int cherryPickup(vector<vector<int>>& grid) {
        n = grid.size();
        m = grid[0].size();
        vector<vector<vector<int>>> dp(
            n, vector<vector<int>>(m, vector<int>(m, -1)));

        return a(grid,dp,0,0,m-1);
    }
};
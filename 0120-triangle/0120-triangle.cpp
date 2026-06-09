class Solution {
public:

    vector<vector<int>> dp;

    int a(vector<vector<int>>& triangle, int i, int j){

        if(i == triangle.size()-1){
            return triangle[i][j];
        }

        if(dp[i][j] != INT_MAX){
            return dp[i][j];
        }

        int down = a(triangle, i+1, j);

        int diag = a(triangle, i+1, j+1);

        return dp[i][j] =
            triangle[i][j] + min(down, diag);
    }

    int minimumTotal(vector<vector<int>>& triangle) {

        int n = triangle.size();

        dp.assign(n, vector<int>(n, INT_MAX));

        return a(triangle, 0, 0);
    }
};
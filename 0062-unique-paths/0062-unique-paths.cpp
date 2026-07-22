class Solution {
public:
    int a(int m,int n,vector<vector<int>>& dp){
        if(dp[m][n]!=-1)return dp[m][n];
        if(n==0 || m==0){
            return 1;
        }
        return dp[m][n]=a(m-1,n,dp)+a(m,n-1,dp);
        
    }
    int uniquePaths(int m, int n) {
        vector<vector<int>> dp(m,vector<int>(n,-1));
        return a(m-1,n-1,dp);
    }
};
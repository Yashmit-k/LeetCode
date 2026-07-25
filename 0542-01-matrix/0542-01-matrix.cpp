class Solution {
public:
    vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
    vector<vector<int>> updateMatrix(vector<vector<int>>& mat) {
        int n=mat.size();
        int m=mat[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> dp(n,vector<int> (m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(mat[i][j]==0){
                    dp[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(auto d:dir){
                int x=d[0]+r;
                int y=d[1]+c;
                if(x<0 || x>=n || y<0 || y>=m || dp[x][y]!=-1)continue;
                dp[x][y]=dp[r][c]+1;
                q.push({x,y});
            }
        }
        return dp;
    }
};
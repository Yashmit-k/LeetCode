class Solution {
public:
    vector<vector<int>> highestPeak(vector<vector<int>>& g) {
        vector<vector<int>> dir{{1,0},{0,1},{-1,0},{0,-1}};
        int n=g.size();
        int m=g[0].size();
        queue<pair<int,int>> q;
        vector<vector<int>> dp(n,vector<int> (m,-1));
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(g[i][j]==1){
                    dp[i][j]=0;
                    q.push({i,j});
                }
            }
        }
        while(!q.empty()){
            auto [r,c]=q.front();
            q.pop();
            for(auto d:dir){
                int x=r+d[0];
                int y=c+d[1];
                if(x<0 || y<0 || x>=n || y>=m || dp[x][y]!=-1)continue;
                dp[x][y]=dp[r][c]+1;
                q.push({x,y});
            }
        }
        return dp;
    }
};
class Solution {
public:
    vector<vector<int>> v;

    int shortestPathBinaryMatrix(vector<vector<int>>& grid) {
        int n = grid.size() - 1;
        int m = grid[0].size() - 1;

        if(grid[0][0] || grid[n][m])
            return -1;

        v.assign(n + 1, vector<int>(m + 1, -1));

        queue<tuple<int,int,int>> q;
        q.push({0,0,1});
        v[0][0] = 1;

        vector<pair<int,int>> d = {
            {-1,-1},{-1,0},{-1,1},
            {0,-1},         {0,1},
            {1,-1},{1,0},{1,1}
        };

        while(!q.empty()) {
            auto [i,j,l] = q.front();
            q.pop();

            if(i == n && j == m)
                return l;

            for(auto [r,c] : d) {
                int ni = i + r;
                int nj = j + c;

                if(ni >= 0 && nj >= 0 &&
                   ni <= n && nj <= m &&
                   grid[ni][nj] == 0 &&
                   v[ni][nj] == -1)
                {
                    v[ni][nj] = 1;
                    q.push({ni,nj,l+1});
                }
            }
        }

        return -1;
    }
};
class Solution {
public:
    vector<pair<int, int>> dir = {{1, 0}, {0, 1}, {-1, 0}, {0, -1}};

    int n, m;
    vector<vector<int>> vis;

    bool bfs(vector<vector<char>>& grid, int i, int j) {

        queue<tuple<int, int, int, int>> q;

        q.push({i, j, -1, -1});
        vis[i][j] = 1;

        while (!q.empty()) {

            auto [r, c, pr, pc] = q.front();
            q.pop();

            for (auto [dx, dy] : dir) {

                int x = r + dx;
                int y = c + dy;

                if (x < 0 || x >= n || y < 0 || y >= m)
                    continue;

                if (grid[x][y] != grid[r][c])
                    continue;

                if (!vis[x][y]) {

                    vis[x][y] = 1;
                    q.push({x, y, r, c});

                } else {

                    if (x != pr || y != pc)
                        return true;
                }
            }
        }

        return false;
    }

    bool containsCycle(vector<vector<char>>& grid) {

        n = grid.size();
        m = grid[0].size();

        vis.assign(n, vector<int>(m, 0));

        for (int i = 0; i < n; i++) {
            for (int j = 0; j < m; j++) {

                if (!vis[i][j]) {
                    if (bfs(grid, i, j))
                        return true;
                }
            }
        }

        return false;
    }
};
class Solution {
public:
    vector<vector<string>> solveNQueens(int n) {
        vector<vector<string>> res;
        vector<int> pos(n, -1);
        function<bool(int, int)> canPlace = [&](int r, int c) {
            for (int i = 0; i < r; ++i)
                if (pos[i] == c || abs(pos[i] - c) == r - i) return false;
            return true;
        };
        function<void(int)> backtrack = [&](int r) {
            if (r == n) {
                vector<string> board(n, string(n, '.'));
                for (int i = 0; i < n; ++i) board[i][pos[i]] = 'Q';
                res.push_back(board);
                return;
            }
            for (int c = 0; c < n; ++c) {
                if (canPlace(r, c)) {
                    pos[r] = c;
                    backtrack(r + 1);
                }
            }
        };
        backtrack(0);
        return res;
    }
};

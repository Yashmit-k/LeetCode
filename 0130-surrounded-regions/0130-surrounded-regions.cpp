vector<vector<int>> v;

class Solution {
public:
    void a(vector<vector<char>>& board, int i, int j, int rows, int cols) {
        if (i < 0 || j < 0 || i >= rows || j >= cols ||
            board[i][j] == 'X' || v[i][j]) {
            return;
        }

        v[i][j] = 1;

        a(board, i, j + 1, rows, cols);
        a(board, i, j - 1, rows, cols);
        a(board, i + 1, j, rows, cols);
        a(board, i - 1, j, rows, cols);
    }

    void solve(vector<vector<char>>& board) {
        int rows = board.size();
        int cols = board[0].size();

        v.assign(rows, vector<int>(cols, 0));

        for (int j = 0; j < cols; j++) {
            if (board[0][j] == 'O' && !v[0][j])
                a(board, 0, j, rows, cols);
        }

        for (int j = 0; j < cols; j++) {
            if (board[rows - 1][j] == 'O' && !v[rows - 1][j])
                a(board, rows - 1, j, rows, cols);
        }

        for (int i = 0; i < rows; i++) {
            if (board[i][0] == 'O' && !v[i][0])
                a(board, i, 0, rows, cols);
        }

        for (int i = 0; i < rows; i++) {
            if (board[i][cols - 1] == 'O' && !v[i][cols - 1])
                a(board, i, cols - 1, rows, cols);
        }

        for (int i = 0; i < rows; i++) {
            for (int j = 0; j < cols; j++) {
                if (board[i][j] == 'O' && !v[i][j])
                    board[i][j] = 'X';
            }
        }
    }
};
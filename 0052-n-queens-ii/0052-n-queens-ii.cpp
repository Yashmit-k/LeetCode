class Solution {
public:
    int totalNQueens(int n) {
        int count = 0;
        unordered_set<int> colsSet, diag1Set, diag2Set;
        function<void(int)> backtrack = [&](int row) {
            if (row == n) {
                count++;
                return;
            }
            for (int col = 0; col < n; ++col) {
                if (colsSet.count(col) || diag1Set.count(row + col) || diag2Set.count(row - col))
                    continue;
                colsSet.insert(col);
                diag1Set.insert(row + col);
                diag2Set.insert(row - col);
                backtrack(row + 1);
                colsSet.erase(col);
                diag1Set.erase(row + col);
                diag2Set.erase(row - col);
            }
        };
        backtrack(0);
        return count;
    }
};

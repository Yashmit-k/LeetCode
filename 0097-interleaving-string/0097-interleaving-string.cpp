class Solution {
public:
    int n, l1, l2;
    vector<vector<int>> dp;

    bool a(string& s1, string& s2, string& s3, int i, int j) {
        if (i == l1 && j == l2)
            return true;

        if (dp[i][j] != -1)
            return dp[i][j];

        int k = i + j;
        bool x = false, y = false;

        if (i < l1 && s1[i] == s3[k]) {
            x = a(s1, s2, s3, i + 1, j);
        }

        if (j < l2 && s2[j] == s3[k]) {
            y = a(s1, s2, s3, i, j + 1);
        }

        return dp[i][j] = x || y;
    }

    bool isInterleave(string s1, string s2, string s3) {
        n = s3.length();
        l1 = s1.length();
        l2 = s2.length();

        if (l1 + l2 != n)
            return false;

        dp.assign(l1 + 1, vector<int>(l2 + 1, -1));

        return a(s1, s2, s3, 0, 0);
    }
};
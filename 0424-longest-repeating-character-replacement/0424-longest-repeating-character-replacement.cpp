class Solution {
public:
    int characterReplacement(string s, int k) {
        vector<int> f(26, 0);
        int l = 0, m = 0, maxf = 0, ans = 0;
        for (int r = 0; r < s.length(); r++) {
            f[s[r] - 'A']++;
            maxf = max(maxf, f[s[r] - 'A']);
            while ((r - l + 1) - maxf > k) {
                f[s[l] - 'A']--;
                l++;
            }
            ans = max(ans, r - l + 1);
        }
        return ans;
    }
};
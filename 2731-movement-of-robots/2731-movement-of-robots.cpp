class Solution {
public:
    int sumDistance(vector<int>& nums, string s, int d) {
        int n = nums.size();
        const long long MOD = 1e9 + 7;

        vector<long long> pos(n);

        for (int i = 0; i < n; i++) {
            if (s[i] == 'L')
                pos[i] = (long long)nums[i] - d;
            else
                pos[i] = (long long)nums[i] + d;
        }

        sort(pos.begin(), pos.end());

        long long prefixSum = pos[0];
        long long ans = 0;

        for (int i = 1; i < n; i++) {
            long long contribution = pos[i] * i - prefixSum;
            ans = (ans + contribution) % MOD;
            prefixSum += pos[i];
        }

        return ans;
    }
};
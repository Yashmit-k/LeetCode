class Solution {
public:
    int MOD = 1e9 + 7;

    int sumSubarrayMins(vector<int>& arr) {
        int n = arr.size();
        long long count = 0;

        stack<pair<int, int>> s;

        for (int i = 0; i <= n; i++) {

            while (!s.empty() && (i == n || arr[i] < s.top().first)) {

                int value = s.top().first;
                int mid = s.top().second;
                s.pop();

                int left = s.empty() ? -1 : s.top().second;
                int right = i;

                long long leftCount = mid - left;
                long long rightCount = right - mid;

                count = (count + value * leftCount * rightCount) % MOD;
            }

            if (i < n)
                s.push({arr[i], i});
        }

        return count;
    }
};
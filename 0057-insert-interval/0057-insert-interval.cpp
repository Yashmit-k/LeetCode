class Solution {
public:
    vector<vector<int>> insert(vector<vector<int>>& intervals, vector<int>& newInterval) {
        vector<vector<int>> ans;
        int i = 0, n = intervals.size();

        while(i < n && intervals[i][1] < newInterval[0]) {
            ans.push_back(intervals[i]);
            i++;
        }

        int mi = newInterval[0];
        int ma = newInterval[1];

        while(i < n && intervals[i][0] <= ma) {
            mi = min(mi, intervals[i][0]);
            ma = max(ma, intervals[i][1]);
            i++;
        }

        ans.push_back({mi, ma});

        while(i < n) {
            ans.push_back(intervals[i]);
            i++;
        }

        return ans;
    }
};
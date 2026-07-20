class Solution {
public:
    int eraseOverlapIntervals(vector<vector<int>>& intervals) {
        sort(intervals.begin(), intervals.end(),
            [](const vector<int>& a, const vector<int>& b) {
                return a[1] < b[1];
            }
        );
        int p=intervals[0][1];
        int x=0;
        for(int i=1;i<=intervals.size()-1;i++){
            if(intervals[i][0]<p)x++;
            else{
                p=intervals[i][1];
            }
        }
        return x;
    }
};
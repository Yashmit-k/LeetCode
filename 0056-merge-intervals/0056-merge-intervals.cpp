class Solution {
public:
    vector<vector<int>> merge(vector<vector<int>>& intervals) {
        vector<vector<int>> a;
        sort(intervals.begin(),intervals.end());
        a.push_back(intervals[0]);
        for(auto m:intervals){
            int i=m[0],j=m[1];
            auto n=a.back();
            int x=n[0],y=n[1];
            if(i<=y){
                a.pop_back();
                a.push_back({x,max(j,y)});
            }
            else{
                a.push_back({i,j});
            }
        }
        return a;
    }
};
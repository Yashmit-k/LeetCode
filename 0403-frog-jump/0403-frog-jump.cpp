class Solution {
public:
    bool canCross(vector<int>& stones) {
        unordered_map<int,unordered_set<int>> dp;
        for (int stone : stones) {
            dp[stone] = {};
        }
        dp[0].insert(0);
        for(auto stone:stones){
            for(auto x:dp[stone]){
                for(int j=x-1;j<=x+1;j++){
                    if(j<=0)continue;
                    int next=stone+j;
                    if(dp.find(next)!=dp.end()){
                        dp[next].insert(j);
                    }
                }
            }
        }
        return !dp[stones.back()].empty();
    }
};
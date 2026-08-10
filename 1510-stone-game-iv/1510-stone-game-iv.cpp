class Solution {
public:
    void a(vector<bool>& dp,int n){
        long long i=1;
        while(i*i<=n){
            if(dp[n-(i*i)]==false){
                dp[n]=true;
                return;
            }
            i++;
        }
        dp[n]=false;
    }
    bool winnerSquareGame(int n) {
        vector<bool> dp(n+1);
        dp[0]=false;
        for(int i=1;i<=n;i++){
            a(dp,i);
        }
        return dp[n];
    }
};
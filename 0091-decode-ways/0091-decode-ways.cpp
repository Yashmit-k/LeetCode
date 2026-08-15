class Solution {
public:
    int n;
    int a(string s,int i,vector<int>& dp){
        if(i==n)return 1;
        int take1=0,take2=0;
        if(dp[i]!=-1)return dp[i];
        if(s[i]=='0')return 0;
        take1=a(s,i+1,dp);
        if (i + 1 < n && (s[i] == '1' || (s[i] == '2' && s[i+1] <= '6')))take2=a(s,i+2,dp);
        dp[i]=take1+take2;
        return dp[i];
    }
    int numDecodings(string s) {
        n=s.length();
        vector<int> dp(n,-1);
        return a(s,0,dp);
    }
};
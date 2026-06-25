class Solution {
public:
    int beautySum(string s) {
        int n=s.length(),ans=0;
        for(int i=0;i<n;i++){
            vector<int> f(26,0);
            for(int j=i;j<n;j++){
                f[s[j]-'a']++;
                int mn=INT_MAX,mx=0;
                for(auto k:f){
                    if(k==0)continue;
                    mn=min(mn,k);
                    mx=max(mx,k);
                }
                ans+= mx-mn;
            }
            
        }
        return ans;
    }
    
};
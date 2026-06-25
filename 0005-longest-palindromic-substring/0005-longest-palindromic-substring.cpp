class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length(),m=1,sl;
        if(n==1)return s;
        for(int i=1;i<n;i++){
            int l=i,r=i;
            while(l>-1 && r<n && s[l]==s[r]){
                if(r-l+1>m){
                    m=r-l+1;
                    sl=l;
                }
                l--;
                r++;
            }
            l=i-1,r=i;
            while(l>-1 && r<n && s[l]==s[r]){
                if(r-l+1>m){
                    m=r-l+1;
                    sl=l;
                }
                l--;
                r++;
            }
        }
        return s.substr(sl,m);
    }
};
class Solution {
public:
    string longestPalindrome(string s) {
        int n=s.length();
        int l,r,len=0,ll,lr;
        for(int i=0;i<n;i++){
            l=i;r=i;
            while(l>-1 && r<n && s[l]==s[r]){
                if(len<r-l+1){
                    len=r-l+1;
                    ll=l;lr=r;
                }
                l--;
                r++;
            }
        }
        for(int i=1;i<n;i++){
            l=i-1;r=i;
            while(l>-1 && r<n && s[l]==s[r]){
                if(len<r-l+1){
                    len=r-l+1;
                    ll=l;lr=r;
                }
                l--;
                r++;
            }
        }
        return s.substr(ll,len);
    }
};
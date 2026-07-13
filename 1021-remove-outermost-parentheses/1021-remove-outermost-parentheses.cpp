class Solution {
public:
    string removeOuterParentheses(string s) {
        int count=1;string ans="";
        int r=1,l=0;
        while(r<s.size()){
            if(s[r]=='(')count++;
            else count--;
            if(count==0){

                ans+=s.substr(l+1,r-l-1);
                l=r+1;
            }
            r++;
        }
        return ans;
    }
};
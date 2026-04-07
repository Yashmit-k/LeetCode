class Solution {
public:
    void backtrack(int open,int close, vector<string>& x,string y,int n){
            if(open == close && close == n){
                x.push_back(y);
                y="";
                return;
            }

            if(open<n){
                y.push_back('(');
                backtrack(open+1,close,x,y,n);
                y.pop_back();
            }

            if(close<open){
               y.push_back(')');
                backtrack(open,close+1,x,y,n);
                y.pop_back();
            }
        }
    vector<string> generateParenthesis(int n) {
        vector<string> x;
        string y="";
        backtrack(0,0,x,y,n);
        return x;
    }
};
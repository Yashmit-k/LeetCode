class Solution {
public:
    int maxDepth(string s) {
        int count=0,mcount=0;
        for(auto i:s){
            if(i=='(')count++;
            else if(i==')')count--;
            mcount=max(count,mcount);
        }
        return mcount;
    }
};
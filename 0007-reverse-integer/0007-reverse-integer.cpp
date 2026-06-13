class Solution {
public:
    int reverse(int x) {
        string y=to_string(x);
        if(y[0]=='-'){
            std::reverse(y.begin()+1,y.end());
        }
        else{
            std::reverse(y.begin(),y.end());
        }
        long long ans=stoll(y);
        return ans>INT_MAX || ans<INT_MIN?0:ans;
    }
};
class Solution {
public:
    long long p(int n){
        if(n==0){
            return 1;
        }
        if(n%2==0){
            long long x=p(n/2);
            return (x*x)%1000000007;
        }
        else{
            return (2 * p(n-1))%1000000007;
        }
    }
    int monkeyMove(int n) {
        return (p(n)-2+1000000007)%1000000007;
    }
};
class Solution {
public:
    long long p(long long x, long long y){
    

    if(x== 0)
        return 1;

    if(x % 2 == 0){
        long long half = p(x/2, y);
        return (half * half) % 1000000007;
    }

    return (y * p(x-1, y)) % 1000000007;
}
    int countGoodNumbers(long long n) {
        
        return (p((n+1)/2,5) * p(n/2,4))% 1000000007;
    }
};
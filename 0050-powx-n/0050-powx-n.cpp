class Solution {
public:
    double power(double x, long long n) {
        if (n == 0) return 1.0;

        double t = power(x, n / 2);

        if (n % 2 == 0)
            return t * t;
        else
            return x * t * t;
    }

    double myPow(double x, int n) {
        long long N = n;

        if (N < 0) {
            x = 1.0 / x;
            N = -N;
        }

        return power(x, N);
    }
};
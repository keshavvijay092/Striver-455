class Solution {
public:
   double solve(double x, long long n) {
        if (n == 0) return 1.0;

        double half = solve(x, n / 2);

        if (n % 2 == 0) {
            return half * half;
        } else {
            return half * half * x;
        }
    }

    double myPow(double x, int n) {
        long long N = n; // Use long long to handle large negative values safely
        if (N < 0) {
            x = 1 / x;
            N = -N; // Work with positive exponent
        }
        return solve(x, N);
    }
};
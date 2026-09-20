int divide(int dividend, int divisor) {
if (dividend == INT_MIN && divisor == -1) return INT_MAX;
    long long a = dividend < 0 ? -(long long)dividend : (long long)dividend;
    long long b = divisor < 0 ? -(long long)divisor : (long long)divisor;
    int neg = (dividend < 0) ^ (divisor < 0);
    long long ans = 0;
    while (a >= b) {
        long long t = b, m = 1;
        while (a >= (t << 1)) {
            t <<= 1;
            m <<= 1;
        }
        a -= t;
        ans += m;
    }
    if (neg) ans = -ans;
    if (ans > INT_MAX) return INT_MAX;
    if (ans < INT_MIN) return INT_MIN;
    return (int)ans;
}
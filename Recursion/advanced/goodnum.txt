#define mod 1000000007
class Solution {
public:
    // Function to calculate power modulo mod
    long long powers(long long x, long long n) {
        long long ans = 1;

        while (n > 0) {
            if (n % 2 == 1) {
                ans *= x;
                ans %= mod;
            }
            x *= x;
            x %= mod;
            n /= 2;
        }

        return ans % mod;
    }

    int countGoodNumbers(long long n) {
        // Calculate the count of odd and even positions
        long long odd = n / 2;
        long long even = n / 2 + n % 2;

        // Calculate the total count of good numbers
        long long total_count = (powers(5, even) * powers(4, odd)) % mod;

        return total_count;
    }
};
class Solution {
public:
    bool isHappy(int n) {
        long long sum = n;

        while (sum != 1 && sum != 4) {
            sum = 0;

            while (n > 0) {
                long long rem = n % 10;
                sum += rem * rem;
                n /= 10;
            }

            n = sum;
        }

        return sum == 1;
    }
};
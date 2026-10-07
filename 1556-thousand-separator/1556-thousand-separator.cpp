class Solution {
public:
    string thousandSeparator(int n) {
        string s = "";
        int count = 0;

        if (n == 0)
            return "0";

        while (n > 0) {
            int rem = n % 10;

            s += char(rem + '0');

            n = n / 10;

            count++;

            if (count % 3 == 0 && n > 0) {
                s += '.';
            }
        }


        reverse(s.begin(), s.end());

        return s;
    }
};
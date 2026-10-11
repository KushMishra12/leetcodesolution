
class Solution {
public:
    string multiply(string num1, string num2) {
        int n = num1.size();
        int m = num2.size();

        if (num1 == "0" || num2 == "0")
            return "0";

        vector<int> ans(n + m, 0);

        for (int i = n - 1; i >= 0; i--) {
            for (int j = m - 1; j >= 0; j--) {
                int a = num1[i] - '0';
                int b = num2[j] - '0';

                int mul = a * b + ans[i + j + 1];

                ans[i + j + 1] = mul % 10;
                ans[i + j] += mul / 10;
            }
        }

        string str = "";

        for (int x : ans) {
            if (str.empty() && x == 0)
                continue;

            str += char(x + '0');
        }

        return str;
    }
};

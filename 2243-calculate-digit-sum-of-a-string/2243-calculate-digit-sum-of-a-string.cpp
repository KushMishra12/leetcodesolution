
class Solution {
public:
    string digitSum(string s, int k) {

        while(s.size() > k) {

            string str = "";
            int sum = 0;
            int c = 0;

            for(int i = 0; i < s.size(); i++) {

                sum += s[i] - '0';
                c++;

                if(c == k) {
                    str += to_string(sum);
                    sum = 0;
                    c = 0;
                }
            }

            // Handle remaining digits
            if(c > 0) {
                str += to_string(sum);
            }

            s = str;
        }

        return s;
    }
};

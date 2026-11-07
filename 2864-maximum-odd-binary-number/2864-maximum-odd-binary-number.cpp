class Solution {
public:
    string maximumOddBinaryNumber(string s) {
        int count = 0;

        for(int i = 0; i < s.size(); i++) {
            if(s[i] == '1') {
                count++;
            }
        }

        string ans = "";

        // Put all 1s except one at the beginning
        for(int i = 0; i < count - 1; i++) {
            ans += '1';
        }

        // Put all 0s in the middle
        for(int i = 0; i < s.size() - count; i++) {
            ans += '0';
        }

        // Put one 1 at the end to make it odd
        ans += '1';

        return ans;
    }
};
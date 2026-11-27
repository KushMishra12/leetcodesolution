
class Solution {
public:
    vector<string> findWords(vector<string>& words) {

        string s1 = "qwertyuiop";
        string s2 = "asdfghjkl";
        string s3 = "zxcvbnm";

        vector<string> ans;

        for (int i = 0; i < words.size(); i++) {

            int c1 = 0, c2 = 0, c3 = 0;

            for (int j = 0; j < words[i].size(); j++) {

                char ch = tolower(words[i][j]);

                if (s1.find(ch) != string::npos) {
                    c1++;
                }
                else if (s2.find(ch) != string::npos) {
                    c2++;
                }
                else if (s3.find(ch) != string::npos) {
                    c3++;
                }
            }

            int len = words[i].size();

            if (c1 == len || c2 == len || c3 == len) {
                ans.push_back(words[i]);
            }
        }

        return ans;
    }
};

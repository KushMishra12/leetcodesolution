
class Solution {
public:
    int uniqueMorseRepresentations(vector<string>& words) {

        vector<string> morse = {
            ".-", "-...", "-.-.", "-..", ".", "..-.",
            "--.", "....", "..", ".---", "-.-", ".-..",
            "--", "-.", "---", ".--.", "--.-", ".-.",
            "...", "-", "..-", "...-", ".--", "-..-",
            "-.--", "--.."
        };

        set<string> st;

        for(int i = 0; i < words.size(); i++) {

            string temp = "";

            for(int j = 0; j < words[i].size(); j++) {
                int index = words[i][j] - 'a';
                temp += morse[index];
            }

            st.insert(temp);
        }

        return st.size();
    }
};

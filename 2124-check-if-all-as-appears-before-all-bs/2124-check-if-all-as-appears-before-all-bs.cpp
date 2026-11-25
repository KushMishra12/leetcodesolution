class Solution {
public:
    bool checkString(string s) {
        int counta=0;
        int count=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='a'){
                counta++;
            }
        }
        for(int j=0;j<s.length();j++){
            if(s[j]=='a'){
                count++;
            }
            if(s[j]=='b' || count==counta){
                if(count==counta){
                    return true;
                }
                else{
                    return false;
                }
            }
        }
        return false;
    }
};
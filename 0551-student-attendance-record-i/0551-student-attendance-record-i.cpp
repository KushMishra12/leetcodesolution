class Solution {
public:
    bool checkRecord(string s) {
        bool late=false;
        int absent=0;
        for(int i=0;i<s.length();i++){
            if(s[i]=='A'){
                absent++;
            }
           else if(s[i]=='L' && s[i+1]=='L' && s[i+2]=='L'){
            late=true;
           }
        }
        if(absent<2 && late==false){
            return true;
        }
        else{
            return false;
        }
    }
};
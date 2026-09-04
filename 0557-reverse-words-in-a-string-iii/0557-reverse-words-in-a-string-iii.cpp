class Solution {
public:
    string reverseWords(string s) {
        string str;
        string s2;
        int pos=0;
        for(int i=0;i<=s.length();i++){
            if(s[i]==' ' || i==s.length()){
                str=s.substr(pos,i-pos);
            reverse(str.begin(),str.end());
           s2=s2+str;
           if(i!=s.length()){
            s2=s2+' ';
           }
            pos=i+1;
            }
        }
        return s2;
    }
};
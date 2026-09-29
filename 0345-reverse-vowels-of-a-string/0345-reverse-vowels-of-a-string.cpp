class Solution {
public:
    string reverseVowels(string s) {
        string str;
        string ans;
     for(int i=0;i<s.length();i++){
        if(s[i]=='a' ||  s[i]=='e' ||  s[i]=='i' ||  s[i]=='o' || s[i]=='u' ||
         s[i]=='A' ||s[i]=='E' || s[i]=='I'|| s[i]=='O' || s[i]=='U'){
            str+=s[i];
        }
     }
      int c=str.length()-1;
        for(int i=0;i<s.length();i++){
             if(s[i]=='a'|| s[i]=='e'|| s[i]=='i'|| s[i]=='o'|| s[i]=='u'|| 
             s[i]=='A'||s[i]=='E'||s[i]=='I'|| s[i]=='O'||s[i]=='U'){
            ans+=str[c--];
            }
            else{
            ans+=s[i];
            }
        }
     return ans;   
    }
};
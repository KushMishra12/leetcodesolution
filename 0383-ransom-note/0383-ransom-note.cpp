class Solution {
public:
    bool canConstruct(string ransomNote, string magazine) {
        int count=0;
        for(int i=0;i<ransomNote.length();i++){
            for(int j=0;j<magazine.length();j++){
                if(ransomNote[i]==magazine[j]){
                    count++;
                    magazine.erase(magazine.begin() + j); 
                    break;
                }
            }
        }
        if(count==ransomNote.length()){
            return true;
        }
        else{
            return false;
        }
    }
};
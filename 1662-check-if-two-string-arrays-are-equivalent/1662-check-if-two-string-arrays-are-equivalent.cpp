class Solution {
public:
    bool arrayStringsAreEqual(vector<string>& word1, vector<string>& word2) {
       string str;
       string st;
       for(int i=0;i<word1.size();i++){
        str+=word1[i];
       } 
       for(int j=0;j<word2.size();j++){
         st+=word2[j];
       }
    //    for(char c:str){
    //     for(char ch:st){
    //         if(ch!=c){
    //             return false;
    //         }
    //     }
    //    }
    //    return true ;
    if(str==st){
        return true;

    }
    else{
        return false;
    }
    }
};
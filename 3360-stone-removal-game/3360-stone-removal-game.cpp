class Solution {
public:
    bool canAliceWin(int n) {
        int c=10;
        int count=0;
           while(n>=c){
            n=n-c;
            count++;
            c--;
           }
           return count%2==1;
    }
};
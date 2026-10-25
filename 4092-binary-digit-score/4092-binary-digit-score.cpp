class Solution {
public:
    int calculateScore(int a, int b) {
        int num1=0;
        int num2=0;
        while(a>0){
           int rem=a%2;
            num1=num1+rem;
            a=a/2;
            }
            while(b>0){
           int rem2=b%2;
            num2=rem2+num2;
            b=b/2;
        }
        if(num1>=num2){
            return num1*num2;
        }
        else{
            return num2/num1;
        }
    }
};
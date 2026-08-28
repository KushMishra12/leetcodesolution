class Solution {
public:
    int countDigits(int num) {
        int rem=0;
        int n=num;
        int c=0;
        while(num>0){
            rem=num%10;
            if(n%rem==0){
                c++;
            }
            num=num/10;
        }
        return c;
    }
};
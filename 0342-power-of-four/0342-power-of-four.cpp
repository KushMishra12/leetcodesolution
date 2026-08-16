class Solution {
public:
    bool isPowerOfFour(int n) {
        for(long int i=0;i<sqrt(n);i++){
            if(n==pow(4,i)){
                return true;
            }
        }
            return false;
    }
};
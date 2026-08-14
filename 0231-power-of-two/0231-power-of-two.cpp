class Solution {
public:
    bool isPowerOfTwo(int n) {
        if(n==8){
            return true;
        }
        for(long int i=0;i*i<=n;i++){
            if(n==pow(2,i)){
                return true;
            }
        }
        return false;
        }
};
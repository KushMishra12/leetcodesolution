class Solution {
public:
    int smallestNumber(int n, int t) {
      for(int i=n;i<INT_MAX;i++){
        int pr=1;
        int b=i;
    while(b>0){
        int rem=b%10;
        pr=pr*rem;
        b=b/10;
    }
    if(pr%t==0){
        return i;
        break;
    }
      }
      return 0;
    }
};
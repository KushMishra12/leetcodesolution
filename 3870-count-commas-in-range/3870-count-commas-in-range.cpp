class Solution {
public:
    int countCommas(int n) {
        int c=0;
    //    while(n>0){
    //     int rem=n%10;
    //     c++;
    //     n=n/10;
    //    }
    //    if(c<4){
    //     return 0;
    //    }
if(n<1000){
    return 0;
}
// for(int i=1000;i<=n;i++){
//     c++;
// }
int ans=n-999;
return ans;
    }
};
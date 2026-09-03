class Solution {
public:
    bool canAliceWin(vector<int>& nums) {
         int enum_ = 0;
        int onum = 0;
        for(int i=0;i<nums.size();i++){
        int c=0;
       
        int n=nums[i];
        while(n>0){
            int rem=n%10;
            c++;
            n=n/10;
        }
        if(c==1){
            onum=onum+nums[i];
        }
        else{
        enum_=enum_+nums[i];
        }
        }
        if(enum_ > onum || onum > enum_){
            return true;
        }
        else
        return false;
        }
    
};
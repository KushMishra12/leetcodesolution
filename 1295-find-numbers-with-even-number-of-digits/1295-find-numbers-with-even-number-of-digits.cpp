class Solution {
public:
    int findNumbers(vector<int>& nums) {
           long int ans=0;
        for(long int i=0;i<nums.size();i++){
            int n=nums[i];
            int c=0;
            while(n>0){
            long int rem=n%10;
                c++;
                n=n/10;
            }
            if(c%2==0){
                ans++;
            }
        }
        return ans;
    }
};
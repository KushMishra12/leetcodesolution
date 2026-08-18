class Solution {
public:
    int majorityElement(vector<int>& nums) {
      int len =nums.size();
      int c=0;
      for(int i=0;i<len;i++){
        c=0;
        for(int j=0;j<len;j++){
            if(nums[i]==nums[j]){
                c++;
            }
            }
            if(c>len/2){
                return nums[i];
        }
      } 
      return {}; 
    }
};
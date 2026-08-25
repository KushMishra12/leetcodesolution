class Solution {
public:
    int repeatedNTimes(vector<int>& nums) {
     int len =nums.size();
     int n=2*len;
     int c=0;
     for(int i=0;i<len;i++){
        c=0;
    for(int j=0;j<len;j++){
        if(nums[i]==nums[j]){
            c++;
        }
        if(c>1){
            return nums[i];
        }
    }
     }  return {}; 
    }
};
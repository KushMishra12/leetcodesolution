class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
     int max;
     for(int i=0;i<nums.size();i++){
     int b=0;
     int min=nums[i];
        for(int j=i;j<nums.size();j++){
           if(max<nums[i]){
            max=nums[i];
           }
           if(min>nums[j]){
            min=nums[j];
           }
        }
        b=max-min;
        if(b<=k){
            return i;
        }
     } 
     return -1;
    }
};
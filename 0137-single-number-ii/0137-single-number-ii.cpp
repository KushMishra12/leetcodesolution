class Solution {
public:
    int singleNumber(vector<int>& nums) {
        int len =nums.size();
        for(int i=0;i<len;i++){
            int c=0;
            for(int j=0;j<len;j++){
                if(nums[i]==nums[j]){
                    c++;
                }
        }
            if(c!=3){
                return nums[i];
            }
        }
        return {};
    }
};
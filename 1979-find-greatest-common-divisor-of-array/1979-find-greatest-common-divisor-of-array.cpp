class Solution {
public:
    int findGCD(vector<int>& nums) {
      sort(nums.begin(),nums.end());
      int len =nums.size();
      return gcd(nums[0],nums[len-1]);
     
    }
};
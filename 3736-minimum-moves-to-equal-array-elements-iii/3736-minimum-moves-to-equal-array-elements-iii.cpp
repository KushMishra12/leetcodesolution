class Solution {
public:
    int minMoves(vector<int>& nums) {
        int count=0;
        sort(nums.begin(),nums.end());
        for(int i=0;i<nums.size();i++){
            count+=abs(nums[i]-nums[nums.size()-1]);
        }
        return count;
    }
};
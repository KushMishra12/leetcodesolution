class Solution {
public:
    int findMaxK(vector<int>& nums) {
        sort(nums.begin(), nums.end());

        for (int i = nums.size() - 1; i >= 0; i--) {
            // if (nums[i] <= 0)
            //     continue;

            for (int j = 0; j < nums.size(); j++) {
                if (nums[j] == -nums[i]) {
                    return nums[i];
                }
            }
        }

        return -1;
    }
};
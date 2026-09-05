class Solution {
public:
    int firstStableIndex(vector<int>& nums, int k) {
        int maximum = nums[0];
        int len = nums.size();

        vector<int> mn(len);
        mn[len - 1] = nums[len - 1];

        for (int i = len - 2; i >= 0; i--) {
            if (nums[i] < mn[i + 1]) {
                mn[i] = nums[i];
            }
            else {
                mn[i] = mn[i + 1];
            }
        }

        for (int i = 0; i < len; i++) {

           
            if (maximum < nums[i]) {
                maximum = nums[i];
            }

           
            int minimum = mn[i];

            int d = maximum - minimum;

            if (d <= k) {
                return i;
            }
        }

        return -1;
    }
};
class Solution {
public:
    int thirdMax(vector<int>& nums) {

        if(nums.size() < 3) {
            return *max_element(nums.begin(), nums.end());
        }

        vector<int> v;

        for(int x : nums) {

            if(find(v.begin(), v.end(), x) == v.end()) {
                v.push_back(x);
            }
        }

        sort(v.begin(), v.end(), greater<int>());

        if(v.size() < 3) {
            return v[0];
        }

        return v[2];
    }
};
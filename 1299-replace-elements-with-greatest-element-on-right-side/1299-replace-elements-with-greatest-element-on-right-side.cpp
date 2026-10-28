
class Solution {
public:
    vector<int> replaceElements(vector<int>& arr) {
        int n = arr.size();
        vector<int> v(n);

        if (n == 0) {
            return v;
        }

        v[n - 1] = -1;

        for (int i = 0; i < n - 1; i++) {
            int maxi = INT_MIN;

            for (int j = i + 1; j < n; j++) {
                if (arr[j] > maxi) {
                    maxi = arr[j];
                }
            }

            v[i] = maxi;
        }

        return v;
    }
};

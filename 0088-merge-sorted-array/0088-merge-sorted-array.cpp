class Solution {
public:
    void merge(vector<int>& nums1, int m, vector<int>& nums2, int n) {
        // sort(nums1.begin(),nums1.end());
        // sort(nums2.begin(),nums2.end());
        vector<int>v;
        for(int i=0;i<m;i++){
                v.push_back(nums1[i]);
            }
        for(int j=0;j<n;j++){
            v.push_back(nums2[j]);
        }
        sort(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            nums1[i]=v[i];
        }
    }
};
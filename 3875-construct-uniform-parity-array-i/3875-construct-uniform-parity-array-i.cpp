class Solution {
public:
    bool uniformArray(vector<int>& nums1) {
        vector<int>nums2;
        int c=0;
        for(int i=0;i<nums1.size();i++){
            if(nums1[i]%2==0){
                nums2.push_back(nums1[i]);
                c++;
            }
            else{
            nums2.push_back(nums1[i]-1);
            c++;
            }
        }
        if(c==nums1.size()){
            return true;
        }
        else
        return false;

    }
};
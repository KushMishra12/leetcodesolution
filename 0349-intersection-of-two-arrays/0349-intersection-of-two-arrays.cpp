class Solution {
public:
    vector<int> intersection(vector<int>& nums1, vector<int>& nums2) {
        int len1=nums1.size();
        int len2=nums2.size();
        vector<int>v;
        for(int i=0;i<len1;i++){
            bool found=false;
            for(int j=0;j<len2;j++){
                if(nums1[i]==nums2[j]){
                    found=true;
                   break;
                }
            }

                if(found){
                    bool already=false;
                    for(int k=0;k<v.size();k++){
                        if(v[k]==nums1[i]){
                            already=true;
                            break;
                        }
                    }
                    if(!already){
                        v.push_back(nums1[i]);
                    }
                }
        }
        return v;
            }
};
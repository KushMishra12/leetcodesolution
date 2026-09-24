class Solution {
public:
    int maximumProduct(vector<int>& nums) {
        sort(nums.begin(),nums.end(),greater());
        int pro=1;
        int p=0;
        p=nums[0]*nums[nums.size()-1]*nums[nums.size()-2];
        for(int i=0;i<3;i++){
            pro=pro*nums[i];
        }
        if(p>pro){
            return p;
        }
        else{
        return pro;
        }
    }
};
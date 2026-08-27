class Solution {
public:
    void moveZeroes(vector<int>& nums) {
        int len =nums.size();
        int c=0;
        vector<int>v;
        for(int i=0;i<len;i++){
            if(nums[i]==0){
                c++;
            }
            //else if(nums[i]!=0)
            else{
                v.push_back(nums[i]);
            }
            }
            for(int i=0;i<c;i++){
                v.push_back(0);
            }
            for(int j=0;j<v.size();j++)
             nums[j]=v[j];
    }
};
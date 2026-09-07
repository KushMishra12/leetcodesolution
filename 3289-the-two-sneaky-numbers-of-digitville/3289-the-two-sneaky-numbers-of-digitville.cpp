class Solution {
public:
    vector<int> getSneakyNumbers(vector<int>& nums) {
        vector<int>v;
        
        for(int i=0;i<nums.size();i++){
        int c=0;
            for(int j=0;j<nums.size();j++){
            if(nums[i]==nums[j]){
                c++;
            }
        }
          if(c==2){
            bool already=false;
        for(int k=0;k<v.size();k++){
            if(v[k]==nums[i]){
                already=true;
            }
        }
        if(!already){
            v.push_back(nums[i]);
        }
        }
        }
        return v;
    }
};
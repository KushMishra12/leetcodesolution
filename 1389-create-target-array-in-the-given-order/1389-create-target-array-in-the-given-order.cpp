class Solution {
public:
    vector<int> createTargetArray(vector<int>& nums, vector<int>& index) {
        vector<int>v;
        int c=0;
        for(int i=0;i<nums.size();i++){
            int n=index[i];
        if(find(index.begin(),index.end(),n)!=index.end()){
            v.insert(v.begin()+n,nums[i]);
        }
        else{
            v[n]=nums[i];
        }
        }
        return v;
            
    }
};
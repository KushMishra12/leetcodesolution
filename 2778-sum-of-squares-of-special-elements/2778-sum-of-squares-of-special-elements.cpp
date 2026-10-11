class Solution {
public:
    int sumOfSquares(vector<int>& nums) {
        int n=nums.size();
        long long sum=0;
      //  nums.insert(nums.begin()+0,0);
        //sort(nums.begin(),nums.end());
        for(int i=1;i<=nums.size();i++){
            if(n%i==0){
                sum=sum+pow(nums[i-1],2);
            }
        }
        return sum;
    }
};
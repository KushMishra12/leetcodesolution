class Solution {
public:
    double trimMean(vector<int>& arr) {
        long long sum=0;
        
        sort(arr.begin(),arr.end());
        int len=arr.size();
        int n=(5*len)/100;
        for(int i=n;i<len-n;i++){
            sum+=arr[i];
        }
   double ans=double(sum)/(len-(2*n));
        return ans;
    }
};
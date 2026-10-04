class Solution {
public:
    int countGoodTriplets(vector<int>& arr, int a, int b, int c) {
        int count=0;
        int p,q,r;
       for(int i=0;i<arr.size();i++){
        for(int j=0;j<arr.size();j++){
            for(int k=0;k<arr.size();k++){
p=abs(arr[i] - arr[j]);
q=abs(arr[j] - arr[k]);
r=abs(arr[i] - arr[k]);
                if(0<=i && i<j & j<k && k<arr.size() && p<=a && q<=b && r<=c){
                    count ++;
                }
            }
        }
       } 
       return count;
    }
};
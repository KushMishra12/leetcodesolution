class Solution {
public:
    void duplicateZeros(vector<int>& arr) {
        int len=arr.size();
        vector<int>v;
        for(int i=0;i<arr.size();i++){
            if(arr[i]==0){
                v.push_back(0);
                v.push_back(0);
            }
            else{
            v.push_back(arr[i]);
            }
        }
    for (int i = 0; i <len; i++) {
            arr[i] = v[i];
        }
    }
};
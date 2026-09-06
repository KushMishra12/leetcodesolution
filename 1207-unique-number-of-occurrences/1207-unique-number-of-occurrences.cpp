class Solution {
public:
    bool uniqueOccurrences(vector<int>& arr) {
        int len=arr.size();
        vector<int>v;
        for(int i=0;i<len;i++){
             int c=0;
             bool already = false;
                for(int k=0;k<i;k++){
                    if(arr[k]==arr[i]){
                        already=true;
                        break;
                    }
                }
                if(already){
                    continue;
                }
            for(int j=0;j<len;j++){
                if(arr[i]==arr[j]){
                    c++;
                }
            }
            for(int i=0;i<v.size();i++){
                if(v[i]==c){
                    return false;
                }
            }
                v.push_back(c);
            }
        return true;
        }
    };

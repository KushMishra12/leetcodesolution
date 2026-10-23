class Solution {
public:
    vector<int> selfDividingNumbers(int left, int right) {
        vector<int>v;
        for(int i=left;i<=right;i++){
            int num=i;
            bool valid=true;
            while(num>0){
                int rem=num%10;
                if(rem==0 || i%rem!=0 ){
                    valid=false;
                    break;
                }
                num=num/10;
            }
             if(valid){
                   v.push_back(i); 
                }
        }
        return v;
    }
};
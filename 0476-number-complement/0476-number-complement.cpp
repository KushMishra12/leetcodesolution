class Solution {
public:
    int findComplement(int num) {
        vector<int>v;
        while(num>0){
            int rem=num%2;
            v.push_back(rem);
            num=num/2;
        }
        reverse(v.begin(),v.end());
        for(int i=0;i<v.size();i++){
            if(v[i]==0){
                v[i]=1;
            }
            else{
                v[i]=0;
            }
        }
        int decimal=0;
        for(int j=0;j<v.size();j++){
            decimal=decimal*2+v[j];
        }
        return decimal;
    }
};
class Solution {
public:
    int digitFrequencyScore(int n) {
        vector<int>v;
        int sum=0;
        while(n>0){
            int rem=n%10;
            v.push_back(rem);
            n=n/10;
        }
        vector<int>vr;
        for(int i=0;i<v.size();i++){
        bool already=false;
        int freq=0;
        for(int k=i-1;k>=0;k--){
            if(v[i]==v[k]){
                already=true;
            }
        }
        if(!already){
        for(int j=0;j<v.size();j++){
            if(v[i]==v[j]){
                freq++;
            }
        }
        sum=sum+(v[i]*freq);   
        }
        }
        return sum;
    }
};
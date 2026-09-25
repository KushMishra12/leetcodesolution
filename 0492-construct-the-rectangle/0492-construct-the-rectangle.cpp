class Solution {
public:
    vector<int> constructRectangle(int area) {
        int small=INT_MAX;
        vector<int>v(2);
        for(int i=1;i<=area;i++){
           if(area%i==0){
            int j=area/i;
            if(i>=j){
                    if(small>abs(i-j)){
                        small=abs(i-j);
                        v[0]=i;
                        v[1]=j;
                    }
            }
            }
        }
        return v;
    }
};
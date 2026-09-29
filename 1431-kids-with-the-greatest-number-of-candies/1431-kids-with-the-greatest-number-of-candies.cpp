class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        int max=INT_MIN;
        vector<bool>v(candies.size(),false);
        for(int i=0;i<candies.size();i++){
            if(max<candies[i]){
                max=candies[i];
            }
        }
        for(int j=0;j<candies.size();j++){
            if(max<=(candies[j] + extraCandies)){
                v[j]=true;
            }
            // else{
            //     v.push_back(false);
            // }
        }
        return v;

    }
};
class Solution {
public:
    int numJewelsInStones(string jewels, string stones) {
        int len1=jewels.length();
        int len2=stones.length();
        int c=0;
        for(int i=0;i<len1;i++){
            for(int j=0;j<len2;j++){
                if(jewels[i]==stones[j])
                {
                    c++;
                }
            }
        }
        return c;
    }
};
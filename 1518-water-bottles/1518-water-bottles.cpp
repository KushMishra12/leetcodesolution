class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int total =numBottles;
        int empty=numBottles;
        while(empty>=numExchange){
            int newbottles=empty/numExchange;
            total+=newbottles;
            int rem=empty%numExchange;
            empty=rem+newbottles;
        }
return total;
    }
};
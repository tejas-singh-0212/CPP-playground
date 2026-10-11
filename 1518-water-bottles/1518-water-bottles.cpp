class Solution {
public:
    int numWaterBottles(int numBottles, int numExchange) {
        int maxBottle = numBottles;
        int leftBottles = numBottles;
        while (leftBottles >= numExchange) {
            int currentExchanged = leftBottles/numExchange;
            int currentLeft = leftBottles % numExchange;
            maxBottle += currentExchanged;
            leftBottles  = currentExchanged + currentLeft;
        }
        return maxBottle;
    }
};
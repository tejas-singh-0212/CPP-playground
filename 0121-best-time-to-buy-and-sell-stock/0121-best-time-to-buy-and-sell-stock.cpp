class Solution {
public:
    int maxProfit(vector<int> &arr) {
        int minimum = arr[0];
        int maxProfit = 0;
        for (int i = 0; i < arr.size(); i++) {
            int cost = arr[i] - minimum;
            maxProfit = max(maxProfit, cost);
            minimum = min(minimum, arr[i]);
        }
        return maxProfit;
    }
};
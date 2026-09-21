class Solution {
public:
    vector<bool> kidsWithCandies(vector<int>& candies, int extraCandies) {
        vector<bool> ans;
        int n = candies.size();
        int max_num = candies[0];
        for (int i=1; i<n; i++) {
            max_num = max(max_num, candies[i]);
        }
        for (int i=0; i<n; i++) {
            if (candies[i]+extraCandies >= max_num) {
                ans.emplace_back(true);
            } else {
                ans.emplace_back(false);
            }
        }
        return ans;
    }
};
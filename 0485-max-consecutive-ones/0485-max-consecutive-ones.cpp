class Solution {
public:
    int findMaxConsecutiveOnes(vector<int>& arr) {
        int count = 0, max_count = 0;
        for (int i : arr) {
            if (i==1) {
                count++;
                max_count = max(max_count, count);
            } else count = 0;
        }
        return max_count;
    }
};
class Solution {
public:
    int sumOfD(vector<int>& arr, int div) {
        int sum = 0;
        for (int i : arr) {
            sum = sum + ceil((double)(i) / (double)(div));
        }
        return sum;
    }
    int smallestDivisor(vector<int>& nums, int threshold) {
        int low = 1, high = *max_element(nums.begin(), nums.end()), ans = -1;
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (sumOfD(nums, mid) <= threshold) {
                ans = mid;
                high = mid - 1;
            } else low = mid + 1;
        }
        return ans;
    }
};
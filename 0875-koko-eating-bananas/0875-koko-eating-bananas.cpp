class Solution {
public:
    long long calcTotalHour(vector<int> &v, int hourly) {
        long long totalH = 0;
        int n = v.size();
        for (int i = 0; i<n; i++) {
            totalH += ceil((double)v[i]/(double)hourly);
        }
        return totalH;
    }
    int minEatingSpeed(vector<int>& nums, int h) {
        int low = 1;
        int high = *max_element(nums.begin(), nums.end());
        while (low <= high) {
            int mid = low + (high-low)/2;
            long long totalH = calcTotalHour(nums, mid);
            if (totalH <= h) high = mid-1;
            else low = mid + 1;
        }
        return low;
    }
};
class Solution {
public:
    int countStudents(vector<int> &nums, int pages) {
        int students = 1;
        long long pageStudent = 0;
        for (int i=0; i< nums.size(); i++) {
            if (pageStudent + nums[i] <= pages) {
                pageStudent += nums[i];
            } else {
                students++;
                pageStudent = nums[i];
            }
        }
        return students;
    }
    int splitArray(vector<int>& nums, int m) {
        if (m>nums.size()) return -1;
        int low = *max_element(nums.begin(), nums.end());
        int high = accumulate(nums.begin(), nums.end(), 0);
        while (low <= high) {
            int mid = low + (high - low)/2;
            if (countStudents(nums, mid) > m) {
                low = mid + 1;
            } else high = mid-1;
        }
        return low;
    }
};
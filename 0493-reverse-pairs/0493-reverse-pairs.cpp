class Solution {
public:
    void merge(vector<int> &arr, int low, int mid, int high) {
        vector<int> temp;
        int left = low;
        int right = mid+1;
        while (left <= mid && right <= high) {
            if (arr[left] <= arr[right]) {
                temp.emplace_back(arr[left]);
                left++;
            } else {
                temp.emplace_back(arr[right]);
                right++;
            }   
        }

        while (left <= mid) {
            temp.emplace_back(arr[left]);
            left++;
        }

        while (right <= high) {
            temp.emplace_back(arr[right]);
            right++;
        }

        for (int i = low; i <= high; i++) {
            arr[i] = temp[i-low];
        }
    }

    long long countPairs(vector<int>& arr, int low, int mid, int high) {
        int right = mid+1;
        long long count = 0;
        for(int i = low; i<= mid; i++) {
            while(right <= high && arr[i] > 2LL*arr[right]) {
                right++;
            }
            count += right - (mid+1);
        }
        return count;
    }

    int mergeSort(vector<int> &arr, int low, int high) {
        int count = 0;
        if (low >= high) return count;
        int mid = low + (high - low)/2;
        count += mergeSort(arr, mid+1, high);
        count += mergeSort(arr, low, mid);
        count += countPairs(arr, low, mid, high);
        merge(arr, low, mid, high);
        return count;
    }
    int reversePairs(vector<int>& nums) {
        return mergeSort(nums, 0, nums.size()-1);
    }
};
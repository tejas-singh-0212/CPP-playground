#include<bits/stdc++.h>
using namespace std;

void bubbleSortHelper(vector<int>& nums, int n);
vector<int> bubbleSortRecursive(vector<int>& arr);
void display(vector<int>& arr);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    bubbleSortRecursive(arr);
    display(arr);
    return 0;
}

void bubbleSortHelper(vector<int>& nums, int n) {
    if (n <= 1) return;
    bool swapped = false;
    for (int j = 0; j < n - 1; j++) {
        if (nums[j] > nums[j + 1]) {
            swap(nums[j], nums[j + 1]);
            swapped = true;
        }
    }
    if (!swapped) return;
    bubbleSortHelper(nums, n - 1);
}

vector<int> bubbleSortRecursive(vector<int>& arr) {
    vector<int> nums = arr;
    bubbleSortHelper(nums, nums.size());
    return nums;
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
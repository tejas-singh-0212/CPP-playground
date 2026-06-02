#include<bits/stdc++.h>
using namespace std;
// Selection Sort - find minimum of unsorted array and put it at start of the unsorted part
void selectionSort(vector<int>&);
void display(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    selectionSort(arr);
    display(arr);
    return 0;
}

void selectionSort(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i<n-1; i++) {
        int min_idx = i;
        for (int j=i+1; j<=n-1; j++) {
            if (nums[j] < nums[min_idx]) {
                min_idx = j;
            }
        }
        swap(nums[min_idx], nums[i]);
    }
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;
// Bubble Sort - find maximum of unsorted array and put it at end of the unsorted part
void bubbleSort(vector<int>&);
void display(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    bubbleSort(arr);
    display(arr);
    return 0;
}

void bubbleSort(vector<int>& nums) {
    int n = nums.size();
    for(int i = 0; i<n-1; i++) {
        bool swapped = false;
        for (int j=0; j<n-i-1; j++) {
            if (nums[j] > nums[j+1]) {
                swap(nums[j], nums[j+1]);
                swapped = true;
            }
        }
        if (!swapped) break;
    }
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;
// Insertion Sort - take an element and put at the correct position
void insertionSort(vector<int>&);
void display(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    insertionSort(arr);
    display(arr);
    return 0;
}

void insertionSort(vector<int>& nums) {
    int n = nums.size();
    for (int i=0; i<=n-1; i++) {
        int j = i;
        while (j>0 && nums[j-1] > nums[j]) {
            swap(nums[j-1], nums[j]);
            j--;
        }
    }
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
#include<bits/stdc++.h>
using namespace std;
// Merge Sort - Divide and Merge

void mS(vector<int>&, int, int);
void mergeSort(vector<int>&);
void merge(vector<int>&, int, int, int);
void display(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    mergeSort(arr);
    display(arr);
    return 0;
}

void mergeSort(vector<int>& arr) {
    mS(arr, 0, arr.size()-1);
}

void mS(vector<int>& arr, int low, int high) {
    if (low == high) return;
    int mid = low + (high-low)/2;
    mS(arr, low, mid);
    mS(arr, mid+1, high);
    merge(arr, low, mid, high);
}

void merge(vector<int>& arr, int low, int mid, int high) {
    vector<int> temp;
    int left = low;
    int right = mid+1;
    while(left<=mid && right <= high) {
        if (arr[left] <= arr[right]) {
            temp.emplace_back(arr[left]);
            left++;
        } else {
            temp.emplace_back(arr[right]);
            right++;
        }
    }
    while (left<=mid) {
        temp.emplace_back(arr[left]);
        left++;
    }
    while (right <= high) {
        temp.emplace_back(arr[right]);
        right++;
    }

    for(int i=low; i<=high; i++) {
        arr[i] = temp[i-low];
    }
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
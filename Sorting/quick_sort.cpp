#include<bits/stdc++.h>
using namespace std;
/* 
Quick Sort
1. Pick a pivot and place it at its correct position in the sorted array
2. Smaller on the left, larger on the right
*/
void display(vector<int>&);
void quickSort(vector<int>&);
int partition(vector<int>& arr, int low, int high);
void qS(vector<int>& arr, int low, int high);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    quickSort(arr);
    display(arr);
    return 0;
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}

int partition(vector<int>& arr, int low, int high) {
    int pivot = arr[low];
    int i = low;
    int j = high;
    while (i<j) {
        while (i<j) {
            while (arr[i] <= pivot && i<=high) {
                i++;
            } while (arr[j] > pivot && j >= low) {
                j--;
            } if (i<j) {
                swap(arr[i], arr[j]);
            }
        }
        swap(arr[low], arr[j]);
        return j;
    }
}

void qS(vector<int>& arr, int low, int high) {
    if (low<high) {
        int pIndex = partition(arr, low, high);
        qS(arr, low, pIndex - 1);
        qS(arr, pIndex+1, high);
    }
}
void quickSort(vector<int>& arr) {
    qS(arr, 0, arr.size()-1);
}
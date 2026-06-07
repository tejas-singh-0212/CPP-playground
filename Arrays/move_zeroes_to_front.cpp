#include <bits/stdc++.h>
using namespace std;
/*
Moving all zeroes to front of array
*/

void moveZeroesToFront(vector<int>&);
void display(vector<int> &);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    moveZeroesToFront(arr);
    display(arr);
    return 0;
}

void moveZeroesToFront(vector<int>& arr) {
    int j = -1;
    int n = arr.size();
    for(int i = n-1; i >= 0; i--) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    if(j>-1) {
        for(int i=j-1; i >= 0; i--) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j--;
            }
        }
    }
}

void display(vector<int> &arr) {
    for (int &i : arr) {
        cout << i << " ";
    }
}
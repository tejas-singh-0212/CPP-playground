#include <bits/stdc++.h>
using namespace std;
/*
Moving all zeroes to end of array
*/

void moveZeroesToEnd(vector<int>&);
void display(vector<int> &);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    moveZeroesToEnd(arr);
    display(arr);
    return 0;
}

void moveZeroesToEnd(vector<int>& arr) {
    int j = -1;
    int n = arr.size();
    for(int i = 0; i < n; i++) {
        if (arr[i] == 0) {
            j = i;
            break;
        }
    }
    if(j>-1) {
        for(int i=j+1; i < n; i++) {
            if (arr[i] != 0) {
                swap(arr[i], arr[j]);
                j++;
            }
        }
    }
}

void display(vector<int> &arr) {
    for (int &i : arr) {
        cout << i << " ";
    }
}
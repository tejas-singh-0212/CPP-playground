#include <bits/stdc++.h>
using namespace std;
/*
Rotate right k times
*/

void rightRotate(vector<int> &, int);
void display(vector<int> &);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }
    int steps;
    cout << "Enter steps: ";
    cin >> steps;
    rightRotate(arr, steps);
    display(arr);
    return 0;
}

void rightRotate(vector<int> &arr, int k) {
    k %= arr.size();
    reverse(arr.begin(), arr.end());
    reverse(arr.begin(), arr.begin() + k);
    reverse(arr.begin()+k, arr.end());
}

void display(vector<int> &arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
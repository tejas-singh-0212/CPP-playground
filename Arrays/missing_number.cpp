#include<bits/stdc++.h>
using namespace std;

// Missing number in an array of size n-1 with numbers from 1 to n

int missingNumber(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Missing number: " << missingNumber(arr);
    return 0;
}

int missingNumber(vector<int>& arr) {
    int xor1 = 0, xor2 = 0;
    int n = arr.size()+1;
    for(int i=0; i<n-1; i++) {
        xor2 = xor2 ^ arr[i];
        xor1 = xor1 ^ (i+1);
    } xor1 = xor1^n;
    return xor1^xor2;
}
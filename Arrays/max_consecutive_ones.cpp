#include<bits/stdc++.h>
using namespace std;

// Find max consecutive 1's in the 1's array

int findMaxConsecutiveOnes(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Max consecutive 1's are: " << findMaxConsecutiveOnes(arr);
    return 0;
}

int findMaxConsecutiveOnes(vector<int>& arr) {
    int count = 0, max_count = 0;
    for (int i : arr) {
        if (i==1) {
            count++;
            max_count = max(max_count, count);
        } else count = 0;
    }
    return max_count;
}
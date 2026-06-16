#include<bits/stdc++.h>
using namespace std;

// Find the only number appearing once in an array where every element is repeated

int findNumberAppearingOnlyOnce(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    return 0;
}

int findNumberAppearingOnlyOnce(vector<int>& arr) {
    int ans = 0;
    for (int i : arr) {
        ans = ans^i;
    } return ans;
}
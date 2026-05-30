#include<bits/stdc++.h>
using namespace std;
// Number hashing
int main() {
    int n;
    cin >> n;
    int arr[n];
    unordered_map<int, int> mpp;
    // map<int, int> mpp; // in case array is very large and unorderd_map fails
    for (int i=0; i<n; i++) {
        cin >> arr[i];
        mpp[arr[i]]++;
    }

    int q; // number of queries
    cin >> q;
    while(q--) {
        int num;
        cin >> num;
        cout << mpp[num] << endl;
    }
    return 0;
}
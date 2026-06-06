#include<bits/stdc++.h>
using namespace std;
/* 
check if array is sorted
*/

bool isSorted(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    if (isSorted(arr)) {
        cout << "Sorted";
    } else {
        cout << "Not sorted";
    }
    return 0;
}

bool isSorted(vector<int>& arr) {
    for(int i=1; i< arr.size(); i++) {
        if(arr[i]>=arr[i-1]) {}
        else return false;
    }
    return true;
}
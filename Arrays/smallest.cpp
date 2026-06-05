#include<bits/stdc++.h>
using namespace std;
/* 
Find second smallest element in array
*/
int smallestElement(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int smallest = smallestElement(arr);
    cout << smallest;
    return 0;
}

int smallestElement(vector<int>& arr) {
    int smallest = arr[0];
    for(int i: arr) {
        smallest = min(smallest, i);
    }
    return smallest;
}
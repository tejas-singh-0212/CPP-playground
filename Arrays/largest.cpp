#include<bits/stdc++.h>
using namespace std;
/* 
Find second largest element in array
*/
int largestElement(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int largest = largestElement(arr);
    cout << largest;
    return 0;
}

int largestElement(vector<int>& arr) {
    int largest = arr[0];
    for(int i: arr) {
        largest = max(largest, i);
    }
    return largest;
}
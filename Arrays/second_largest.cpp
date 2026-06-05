#include<bits/stdc++.h>
using namespace std;
/* 
Find second largest element in array
*/
int secondLargestElement(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int second_largest = secondLargestElement(arr);
    cout << second_largest;
    return 0;
}

int secondLargestElement(vector<int>& arr) {
    int largest = arr[0];
    int second_largest = INT_MIN;
    for(int i: arr) {
        if(i > largest) {
            second_largest = largest;
            largest = i;
        } else if(i < largest && i > second_largest) {
            second_largest = i;
        }
    }
    return (second_largest==INT_MIN)?-1:second_largest;
}
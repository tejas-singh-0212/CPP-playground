#include<bits/stdc++.h>
using namespace std;
/* 
Find second smallest element in array
*/
int secondSmallestElement(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    int second_smallest = secondSmallestElement(arr);
    cout << second_smallest;
    return 0;
}

int secondSmallestElement(vector<int>& arr) {
    int smallest = arr[0];
    int second_smallest = INT_MAX;
    for(int i: arr) {
        if (i < smallest) {
            second_smallest = smallest;
            smallest = i;
        } else if(i < second_smallest &&  i!=smallest) {
            second_smallest = i;
        }
    }
    return (second_smallest==INT_MAX)?-1:second_smallest;
}
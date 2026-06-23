#include<bits/stdc++.h>
using namespace std;

// Sort an array containing only 0's, 1's and 2's

void display(vector<int>&);
void sortZeroOneTwo(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    sortZeroOneTwo(arr);
    display(arr);
    return 0;
}

void sortZeroOneTwo(vector<int>& arr) {
    /*
    Dutch National Flag Algorithm
    */
    int low = 0, mid = 0, high = arr.size()-1;
    while(mid <= high) {
        if (arr[mid] == 0) {
            swap(arr[low], arr[mid]);
            mid++;
            low++;
        } else if (arr[mid] == 1) {
            mid++;
        } else {
            swap(arr[mid], arr[high]);
            high--;
        }
    }
}

void display(vector<int>& arr) {
    for (int& i: arr) {
        cout << i << " ";
    }
}
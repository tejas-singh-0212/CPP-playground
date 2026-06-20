#include<bits/stdc++.h>
using namespace std;

// Two Sum problem - only yes or no

string twoSum(vector<int>& arr, int target);

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << twoSum(arr, target);
    return 0;
}

string twoSum(vector<int>& arr, int target) {
    int n = arr.size();
    int left = 0, right = n-1;
    sort(arr.begin(), arr.end());
    while(left<right) {
        int sum = arr[left]+arr[right];
        if (sum == target) return "YES";
        else if (sum < target) left++;
        else right--;
    }
    return "NO";
}
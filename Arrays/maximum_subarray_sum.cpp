#include<bits/stdc++.h>
using namespace std;

// Maximum sum of a subarray
long long maxSubarraySum(vector<int>&);

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << maxSubarraySum(arr);
    return 0;
}

long long maxSubarraySum(vector<int>& arr) {
    // Kadane's Algorithm
	long long sum = 0, max_sum = LONG_MIN;
    for(int i = 0; i<arr.size(); i++) {
        sum += arr[i];
        max_sum = max(sum, max_sum);
        if (sum < 0) {
            sum = 0;
        }
    }
    return max_sum;     
}
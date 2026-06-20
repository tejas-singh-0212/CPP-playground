#include<bits/stdc++.h>
using namespace std;

// Longest subarray with sum = k (with positives only)

int longestSubarrayWithSumK(vector<int>& a, long long k);

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << longestSubarrayWithSumK(arr, k);
    return 0;
}

int longestSubarrayWithSumK(vector<int>& a, long long k) {
    // Write your code here
    int left = 0, right = 0;
    long long sum = a[0];
    int maxLen = 0;
    int n = a.size();
    while (right < n) {
        while(left <= right && sum>k) {
            sum-=a[left++];
        }
        if(sum == k) {
            maxLen = max(maxLen, right-left+1);
        }
        right++;
        if (right < n) sum+=a[right];
    }
    return maxLen;
}
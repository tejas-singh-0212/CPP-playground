#include<bits/stdc++.h>
using namespace std;

// Longest subarray with sum = k (with bothpositives and negatives)

int getLongestSubarray(vector<int>& a, int k);

int main() {
    int n;
    long long k;
    cin >> n >> k;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << getLongestSubarray(arr, k);
    return 0;
}

int getLongestSubarray(vector<int>& a, int k){
    map<long long, int> preSum;
    long long sum = 0;
    int maxLen = 0;
    for (int i=0; i<a.size(); i++) {
        sum+=a[i];
        if (sum==k) {
            maxLen = max(maxLen, i+1);
        }
        long long rem = sum - k;
        if(preSum.find(rem) != preSum.end()) {
            int len = i - preSum[rem];
            maxLen = max(maxLen, len);
        }
        if(preSum.find(sum) == preSum.end()) {
            preSum[sum] = i;
        }
    }
    return maxLen;
}
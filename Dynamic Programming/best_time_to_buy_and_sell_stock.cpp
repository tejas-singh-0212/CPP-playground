#include<bits/stdc++.h>
using namespace std;

// Best time to buy and sell stock to ensure maximum profit
int maxProfit(vector<int>& arr);

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << maxProfit(arr);
    return 0;
}

int maxProfit(vector<int>& arr) {
    int minimum = arr[0];
    int maxProfit = 0;
    for (int i = 0; i < arr.size(); i++) {
        int cost = arr[i] - minimum;
        maxProfit = max(maxProfit, cost);
        minimum = min(minimum, arr[i]);
    }
    return maxProfit;
}
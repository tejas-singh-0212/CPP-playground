#include<bits/stdc++.h>
using namespace std;

// Two Sum problem - Hashing approach

vector<int> twoSum(vector<int>& arr, int target);

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int> indices = twoSum(arr, target);
    for(int i:indices) {
        cout << i << " ";
    }
    return 0;
}

vector<int> twoSum(vector<int>& arr, int target) {
        unordered_map<int, int> mpp;
        int n = arr.size();
        for(int i = 0; i<n; i++) {
            int a = arr[i];
            int more = target - a;
            if(mpp.find(more) != mpp.end()) {
                return {mpp[more], i};
            }
            mpp[a] = i;
        }
        return {-1, -1};
    }
#include<bits/stdc++.h>
using namespace std;

// Rearrange array in alternate positive negative order
// exactly half elements are positive and half are negative
vector<int> rearrangeArray(vector<int>&);

int main() {
    int n, target;
    cin >> n >> target;
    vector<int> arr(n);
    for(int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<int>ans = rearrangeArray(arr);
    for(int i: ans) {
        cout << i << " ";
    }
    return 0;
}

vector<int> rearrangeArray(vector<int>& nums) {
    int n = nums.size();
    vector<int> ans(n, 0);
    int pos = 0, neg = 1;
    for(int i = 0; i<n; i++) {
        if(nums[i] < 0) {
            ans[neg] = nums[i];
            neg += 2;
        } else {
            ans[pos] = nums[i];
            pos += 2;
        }
    }
    return ans;
}
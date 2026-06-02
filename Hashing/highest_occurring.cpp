#include<bits/stdc++.h>
using namespace std;
/*
Given an array nums of n integers, find the most frequent element in it i.e., the element that occurs the maximum number of times. If there are multiple elements that appear a maximum number of times, find the smallest of them.
*/

int mostFrequentElement(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Most frequenct element: " << mostFrequentElement(arr);
    return 0;
}

int mostFrequentElement(vector<int>& nums) {
        map<int, int> mpp;
        for(int i : nums) {
            mpp[i]++;
        }
        int max_element = nums[0], max = 0;
        for (auto it:mpp) {
            if (it.second > max) {
                max = it.second;
                max_element = it.first;
            }
        }
        return max_element;
    }
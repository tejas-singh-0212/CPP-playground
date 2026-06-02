#include<bits/stdc++.h>
using namespace std;
/*
Given an array nums of size n which may contain duplicate elements.
Rreturn a list of pairs where each pair contains a unique element from the array and its frequency in the array.
*/
vector<vector<int>> countFrequencies(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    vector<vector<int>> frequency_array = countFrequencies(arr);
    return 0;
}

vector<vector<int>> countFrequencies(vector<int>& nums) {
        int n = nums.size();
        vector<vector<int>> frequency;
        map<int, int> mpp;
        for (int i=0; i<n; i++) {
            mpp[nums[i]]++;
        }
        vector<int> temp;
        for(auto it : mpp) {
            temp.emplace_back(it.first);
            temp.emplace_back(it.second);
            frequency.push_back(temp);
            temp.clear();
        }
        return frequency;
    }
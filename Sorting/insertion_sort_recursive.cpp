#include<bits/stdc++.h>
using namespace std;

void sortHelper(vector<int>& nums);
vector<int> insertionSort(vector<int>& arr);
void display(vector<int>& arr);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    insertionSort(arr);
    display(arr);
    return 0;
}

void sortHelper(vector<int>& nums) {
    static int i = 0;
    if (i >= nums.size()) {
        i = 0;
        return;
    }        
    int j = i;
    while (j > 0 && nums[j-1] > nums[j]) {
        swap(nums[j-1], nums[j]);
        j--;
    }
    i++;
    sortHelper(nums);
}

vector<int> insertionSort(vector<int>& arr) {
    vector<int> nums = arr;
    sortHelper(nums);
    return nums;
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
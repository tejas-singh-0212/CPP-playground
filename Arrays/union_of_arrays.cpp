#include<bits/stdc++.h>
using namespace std;

// Union of two arrays (after sorting them)

void display(vector<int>&);
vector<int> Union(vector<int>&, vector<int>&);

int main() {
    int n1, n2;
    cin >> n1 >> n2;
    vector<int> arr1(n1), arr2(n2);
    for(int i=0; i<n1; i++) {
        cin >> arr1[i];
    }
    for (int i=0; i<n2; i++) {
        cin >> arr2[i];
    }
    vector<int> unionArr = Union(arr1, arr2);
    display(unionArr);
    return 0;
}

vector<int> Union(vector<int>& arr1, vector<int>& arr2) {
    sort(arr1.begin(), arr1.end());
    sort(arr2.begin(), arr2.end());
    int n1 = arr1.size();
    int n2 = arr2.size();
    int i=0, j=0;
    vector<int> unionArr;
    while(i<n1 && j<n2) {
        if (arr1[i] <= arr2[j]) {
            if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
                unionArr.emplace_back(arr1[i]);
            }
            i++;
        } else {
            if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
                unionArr.emplace_back(arr2[j]);
            }
            j++;
        }
    }
    while (i < n1) {
        if (unionArr.size() == 0 || unionArr.back() != arr1[i]) {
            unionArr.emplace_back(arr1[i]);
        }
        i++;
    }
    while (j < n2) {
        if (unionArr.size() == 0 || unionArr.back() != arr2[j]) {
            unionArr.emplace_back(arr2[j]);
        }
        j++;
    }
    return unionArr;
}

void display(vector<int>& arr) {
    for (int i : arr) {
        cout << i << " ";
    }
}
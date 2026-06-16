#include<bits/stdc++.h>
using namespace std;

// Intersection of 2 sorted arrays

void display(vector<int>&);
vector<int> Intersection(vector<int>&, vector<int>&);

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
    vector<int> intersectionArr = Intersection(arr1, arr2);
    display(intersectionArr);
    return 0;
}

vector<int> Intersection(vector<int>& a, vector<int>& b) {
    sort(a.begin(), a.end());
    sort(b.begin(), b.end());
    int i = 0, j = 0;
    int n1 = a.size();
    int n2 = b.size();
    vector<int> ans;
    while (i<n1 && j<n2) {
        if(a[i] < b[j]) i++;
        else if (b[j]<a[i]) j++;
        else {
            ans.emplace_back(a[i]);
            i++;
            j++;
        }
    }
    return ans;
}

void display(vector<int>& arr) {
    for(int i : arr) {
        cout << i << " ";
    }
}
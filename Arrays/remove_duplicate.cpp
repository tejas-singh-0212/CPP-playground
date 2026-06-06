#include<bits/stdc++.h>
using namespace std;
/* 
Remove duplicate elemets from sorted array
*/

int removeDuplicate(vector<int>&);

int main() {
    int n;
    cin >> n;
    vector<int> arr(n);
    for (int i=0; i<n; i++) {
        cin >> arr[i];
    }
    cout << "Number of distinct elements: " << removeDuplicate(arr);
    return 0;
}

int removeDuplicate(vector<int>& arr) {
    int i=0;
	for (int j=1; j<arr.size(); j++) {
		if (arr[i] != arr[j]) {
			arr[++i] = arr[j];
		}
	}
	return i+1;
}
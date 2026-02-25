#include<bits/stdc++.h>
using namespace std;
int n, x;
int arr[100100];
int check(int mid){
    if(mid == n-1) return 1; // to handle out of bound for last element
    if(arr[mid] > arr[mid+1]) return 1;
    return 0;    
}
// Find the index of peak element in a bitonic array
int main(){
    cin >> n;
    for(int i=0; i < n; i++) cin >> arr[i];
    cin >> x;
    int low = 0, high = n-1, ans = 0;
    while (low <= high)
    {
        int mid = low + (high - low)/2;
        if(check(mid) == 1){
            ans = mid;
            high = mid - 1;
        }else{
            low = mid - 1;
        }
    }
    cout << ans;
}
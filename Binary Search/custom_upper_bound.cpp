#include<bits/stdc++.h>
using namespace std;
int n, x;
int arr[100100];
int check(int mid){
    if(arr[mid] > x) return 1;
    return 0;    
}

int main(){
    cin >> n;
    for(int i=0; i < n; i++) cin >> arr[i];
    cin >> x;
    // upper bound using binary search
    int low = 0, high = n-1, ans = n;
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
    cout << ans; // index where found
}
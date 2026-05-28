#include<bits/stdc++.h>
#define endl "\n" 
using namespace std;

int sumOfN(int);

int main() {
    int a;
    cin >> a;
    cout << sumOfN(a);
    return 0;
}

int sumOfN(int n) {
    if (n==1) return n;
    return (n + sumOfN(n-1));
}
#include<bits/stdc++.h>
using namespace std;

int factorial(int);

int main() {
    int a;
    cin >> a;
    cout << factorial(a);
    return 0;
}

int factorial(int n) {
    if (n==1) return n;
    return (n * factorial(n-1));
}
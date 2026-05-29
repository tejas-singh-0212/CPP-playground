#include<bits/stdc++.h>
using namespace std;

int fibonacci(int); 

int main() {
    int n;
    cin >> n;
    cout << n <<"'th fibonacci: " << fibonacci(n);
    return 0;
}

int fibonacci(int n) {
    // Time complexity - O(2^n)
    if (n<=1) return n;
    return fibonacci(n-1) + fibonacci(n-2);
}
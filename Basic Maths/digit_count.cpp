#include<bits/stdc++.h>
using namespace std;

int digitCount(int);

int main() {
    int n;
    cin >> n;
    cout << "Digits: " << digitCount(n);
    return 0;
}

int digitCount(int n) {
    return (int)log10(n) + 1;
}
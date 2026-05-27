#include<bits/stdc++.h>
using namespace std;

// Euclidean Algorithm
int GCD(int, int);

int main() {
    int a, b;
    cin >> a >> b;
    cout << "GCD: " << GCD(a, b);
    return 0;
}

int GCD(int n1, int n2) {
    while (n1 > 0 && n2 > 0) {
        if (n1 > n2) n1 = n1 % n2;
        else n2 = n2 % n1;
    }
    if (n1 == 0) return n2;
    return n1;
}
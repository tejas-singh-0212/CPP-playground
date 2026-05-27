#include<bits/stdc++.h>
using namespace std;

bool isPrime(int);

int main() {
    int n;
    cin >> n;
    if (isPrime(n)) {
        cout << "Prime";
    } else {
        cout << "False";
    }
    return 0;
}

bool isPrime(int n) {
    int count = 0;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) {
            count++;
            if ((n/i)!=i) count++;
        }
    }
    return count==2;
}
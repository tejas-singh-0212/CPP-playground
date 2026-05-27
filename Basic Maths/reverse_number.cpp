#include<bits/stdc++.h>
using namespace std;

int reverseNumber(int);
int main() {
    int n;
    cin >> n;
    cout << "Reversed: " << reverseNumber(n);
    return 0;
}

int reverseNumber(int n) {
    int rev = 0;
    while (n) {
        rev = rev*10 + (n%10);
        n /= 10;
    }
    return rev;
}
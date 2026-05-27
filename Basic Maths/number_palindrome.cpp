#include<bits/stdc++.h>
using namespace std;

bool isPlaindrome(int);
int reverseNumber(int);

int main() {
    int n;
    cin >> n;
    if (isPlaindrome(n)) {
        cout << "Palindrome";
    } else {
        cout << "Not Palindrome";
    }
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

bool isPlaindrome(int n) {
    return n == reverseNumber(n);
}
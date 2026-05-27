#include<bits/stdc++.h>
using namespace std;

int digitCount(int);
bool isArmstrong(int);

int main() {
    int n;
    cin >> n;
    if (isArmstrong(n)) {
        cout << "Armstrong";
    } else {
        cout << "Not Armstrong";
    }
    return 0;
}

int digitCount(int n) {
    return (int)log10(n) + 1;
}

bool isArmstrong(int n) {
    int digit = digitCount(n);
    int temp = n;
    int sum = 0;
    while (temp) {
        int r = temp%10;
        sum += r*r*r;
        temp /= 10;
    }
    return sum == n;
}
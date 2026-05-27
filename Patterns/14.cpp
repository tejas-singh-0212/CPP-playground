#include<bits/stdc++.h>
using namespace std;

/*
n=5
A
AB
ABC
ABCD
ABCDE
*/
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        for (char ch = 'A'; ch <= 'A' + i; ch++) {
            cout << ch;
        }        
        cout << "\n";
    }
    return 0;
}
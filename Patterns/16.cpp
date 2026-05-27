#include<bits/stdc++.h>
using namespace std;

/*
n=5
A
BB
CCC
DDDD
EEEEE
*/
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        char ch = 'A'+i;
        for (int j=0; j<=i; j++) {
            cout << ch;
        }        
        cout << "\n";
    }
    return 0;
}
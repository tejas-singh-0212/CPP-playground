#include<bits/stdc++.h>
using namespace std;

/*
n=5
E 
D E 
C D E 
B C D E 
A B C D E
*/
int main() {
    int n;
    cin >> n;
    for (int i=0; i<n; i++) {
        char ch = (char)('A' + n-1-i);
        for (int j=0; j<=i; j++) {
            cout << ch++ << " ";
        }
        cout << "\n";
    }
    return 0;
}
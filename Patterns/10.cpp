#include<bits/stdc++.h>
using namespace std;

/*
n=5
*
**
***
****
*****
****
***
**
*
*/
int main() {
    int n;
    cin >> n;
    for (int i=1; i<=2*n-1; i++) {
        int stars = (i>n) ? (2*n-i) : i;
        for (int j = 1; j<=stars; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
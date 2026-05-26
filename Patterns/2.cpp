#include<bits/stdc++.h>
using namespace std;

/*
for n = 5
*
**
***
****
*****
*/

int main() {
    int n;
    cin >> n;
    for (int i=1; i<=n; i++) {
        for (int j=0; j<i; j++) {
            cout << "*";
        }
        cout << "\n";
    }
    return 0;
}
#include<bits/stdc++.h>
using namespace std;

/*
n=5
12345
1234
123
12
1
*/
int main() {
    int n;
    cin >> n;
    for (int i=n; i>0; i--) {
        for (int j=1; j<=i; j++) {
            cout << j;
        }
        cout << "\n";
    }
    return 0;
}
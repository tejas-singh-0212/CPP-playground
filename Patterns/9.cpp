#include<bits/stdc++.h>
using namespace std;

/*
n=5
    *
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
void pattern7(int);
void pattern8(int);
void pattern9(int);

int main() {
    int n;
    cin >> n;
    pattern9(n);
    return 0;
}

void pattern7(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<n-i-1; j++) {
            cout << " ";
        }
        for (int k=0; k<2*i+1; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern8(int n) {
    for (int i=0; i<n; i++) {
        for (int j=0; j<i; j++) {
            cout << " ";
        }
        for (int k=0; k<2*(n-i)-1; k++) {
            cout << "*";
        }
        cout << "\n";
    }
}

void pattern9(int n) {
    pattern7(n);
    pattern8(n);
}
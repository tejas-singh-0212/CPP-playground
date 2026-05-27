#include<bits/stdc++.h>
using namespace std;

/*
n=5
5 5 5 5 5 5 5 5 5 
5 4 4 4 4 4 4 4 5 
5 4 3 3 3 3 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 2 1 2 3 4 5 
5 4 3 2 2 2 3 4 5 
5 4 3 3 3 3 3 4 5 
5 4 4 4 4 4 4 4 5 
5 5 5 5 5 5 5 5 5
*/
int main() {
    int n;
    cin >> n;
    for (int i=0; i<2*n-1; i++) {
        for (int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int right = (2*n - 1) -1 -j;
            int down = (2*n - 1) -1 -i;
            cout << (n - min(min(top, down), min(left, right)));
            if(j < 2*n-2) cout << " ";
        } cout << "\n";
    }
    return 0;
}
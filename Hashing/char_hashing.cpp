#include<bits/stdc++.h>
using namespace std;
// character hashing by array hashing
int main() {
    string s;
    getline(cin, s);
    
    int hash[256] = {0};
    for (int i=0; i<s.size(); i++) {
        hash[s[i]]++;
    }

    int q; // number of queries
    cin >> q;
    while(q--){
        char c;
        cin >> c;
        cout << hash[c] << "\n";
    }
    return 0;
}
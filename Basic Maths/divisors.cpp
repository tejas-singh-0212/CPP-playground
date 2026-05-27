#include<bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;
    cout << "All divisors of " << n << " :" << endl;
    vector<int> f;
    for (int i=1; i*i<=n; i++) {
        if (n%i==0) {
            f.emplace_back(i);
            if ((n/i)!=i) f.emplace_back(n/i);
        }
    }
    sort(f.begin(), f.end());
    for (auto &it : f) cout << it << " ";
    return 0;
}
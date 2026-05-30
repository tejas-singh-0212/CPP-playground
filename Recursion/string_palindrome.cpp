#include<bits/stdc++.h>
using namespace std;

bool isPalindrome(int, string&);

int main() {
    string s;
    getline(cin, s);
    if (isPalindrome(0, s)) cout << "Palindrome";
    else cout << "Not Palindrome";
    return 0;
}

bool isPalindrome(int i, string &s) {
    if (i>=s.size() / 2) return true;
    if (s[i] != s[s.size() -i -1]) return false;
    return isPalindrome(i+1, s);
}
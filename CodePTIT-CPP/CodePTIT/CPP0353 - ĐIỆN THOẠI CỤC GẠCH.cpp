#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

char value(char c) {
    if (c == 'A' || c == 'B' || c == 'C') return '2';
    if (c == 'D' || c == 'E' || c == 'F') return '3';
    if (c == 'G' || c == 'H' || c == 'I') return '4';
    if (c == 'J' || c == 'K' || c == 'L') return '5';
    if (c == 'M' || c == 'N' || c == 'O') return '6';
    if (c == 'P' || c == 'Q' || c == 'R' || c == 'S') return '7';
    if (c == 'T' || c == 'U' || c == 'V') return '8';
    return '9';
}

bool check(string s) {
    int l = 0, r = s.length() - 1;
    while (l < r) {
        if (s[l++] != s[r--]) return false;
    } 
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        transform(s.begin(), s.end(), s.begin(), ::toupper);
        for (int i = 0; i < s.length(); i++) {
            s[i] = value(s[i]);
        }
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
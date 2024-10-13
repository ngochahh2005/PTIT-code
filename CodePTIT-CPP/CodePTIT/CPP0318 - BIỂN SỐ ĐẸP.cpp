#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(string s) {
    if (s[5] < s[6] && s[6] < s[7] && s[7] < s[9] && s[9] < s[10]) return true;
    if (s[5] == s[6] && s[6] == s[7] && s[7] == s[9] && s[9] == s[10]) return true;
    if (s[5] == s[6] && s[6] == s[7] && s[9] == s[10]) return true;
    for (int i = 5; i < 8; i++) if (s[i] != '6' && s[i] != '8') return false;
    for (int i = 9; i < 11; i++) if (s[i] != '6' && s[i] != '8') return false;
    return true;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    cin.ignore();
    while (t--) {
        string s;
        getline(cin, s);
        if (check(s)) cout << "YES\n";
        else cout << "NO\n";
    }
}
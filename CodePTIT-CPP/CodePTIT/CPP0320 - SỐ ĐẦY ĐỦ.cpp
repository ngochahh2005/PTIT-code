#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int check(string s) {
    if (s[0] == '0') return -1;
    int l = s.length();
    int dd[10];
    fill(dd, dd+10, 0);
    for (int i = 0; i < l; i++) {
        if (!isdigit(s[i])) return -1;
        dd[s[i] - '0']++;
    }
    for (int i = 0; i < 10; i++) if (dd[i] == 0) return 0;
    return 1;
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
        int ck = check(s);
        if (ck == -1) cout << "INVALID\n";
        else if (ck == 0) cout << "NO\n";
        else cout << "YES\n";
    }
}
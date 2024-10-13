#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(string str) {
    int l = str.length();
    for (int i = 0; i < l; i++) {
        if (str[i] != '0' && str[i] != '6' && str[i] != '8') return false;
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
        string str;
        cin >> str;
        if (check(str)) cout << "YES\n";
        else cout << "NO\n";
    }
}
#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

bool check(string str) {
    int l = str.length();
    for (int i = 0; i < l-1; i++) {
        if (abs(str[i+1] - str[i]) != 1) return false;
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
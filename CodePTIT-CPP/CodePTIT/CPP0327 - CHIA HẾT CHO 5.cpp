#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
#define mod 5
using namespace std;

int cdt(int a, int b) {
    if (b == 0) return 1;
    int x = cdt(a, b/2) % mod;
    if (b % 2 == 0) return (x * x) % mod;
    else return ((a % mod) * ((x * x) % mod)) % mod;
}

bool check(string s) {
    int res = 0, l = s.length(), mu = 0;
    for (int i = l-1; i >= 0; i--) {
        res = ((res % mod) + ((s[i] - '0') * cdt(2, mu++)) % mod) % mod;
    }
    if (res % 5 == 0) return true;
    return false;
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
        if (check(s)) cout << "Yes\n";
        else cout << "No\n";
    }
}
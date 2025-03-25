#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

string s;
set<string> str;
int n, k;

bool sinh() {
    int i = n-1;
    while (s[i] == 'B' && i >= 0) i--;
    if (i < 0) return false;
    s[i] = 'B';
    for (int j = i+1; j < n; j++) s[j] = 'A';
    return true;
}

bool check() {
    int cnt = 0, d = 0;
    for (int i = 1; i < n; i++) {
        if (s[i] == 'A' && s[i] == s[i-1]) {
            d += (d == 0) ? 2 : 1;
        } else {
            if (d == k) cnt++;
            d = 0;
        }
        if (d > k || cnt > 1) return false;
    }
    if (d == k) cnt++;
    if (cnt == 1) return true;
    return false;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    s = "AAABA";
    s.assign(n, 'A');
    do {
        if (check()) str.insert(s);
    } while (sinh());
    cout << str.size() << "\n";
    for (auto x : str) cout << x << "\n";
}
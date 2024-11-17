#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;

int tong(int n) {
    int s = 0;
    while (n > 0) {
        s += n % 10;
        n /= 10;
    }
    return s;
}

int cnt(int n) {
    if (n < 10) return 0;
    return 1 + cnt(tong(n));
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    string s;
    cin >> s;
    int n = 0;
    for (int i = 0; i < s.length(); i++) {
        n += (s[i] - '0');
    }
    int res = 0;
    if (s.length() > 1) res++;
    res += cnt(n);
    cout << res;
}
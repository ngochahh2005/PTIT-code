#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int a[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        string s;
        cin >> s;
        int n = 0, kq = 0;
        for (int i = 0; i < s.length(); i++) {
            if (isdigit(s[i])) {
                kq = kq * 10 + (s[i] - '0');
                if (!isdigit(s[i+1])) {
                    a[n++] = kq ;
                    kq = 0;
                }
            }
        }
        // if (kq != 0) a[n++] = kq;
        int res = 0;
        for (int i = 0; i < n; i++) {
            res += a[i];
        }
        cout << res << "\n";
    }
}
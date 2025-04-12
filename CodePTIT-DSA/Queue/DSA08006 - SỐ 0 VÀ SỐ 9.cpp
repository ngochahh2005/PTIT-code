#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll number(int n) {
    queue<ll> qu;
    qu.push(9);
    while (true) {
        ll s = qu.front(); qu.pop();
        if (s % n == 0) return s;
        qu.push(s * 10);
        qu.push(s * 10 + 9);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << number(n) << "\n";
    }
}
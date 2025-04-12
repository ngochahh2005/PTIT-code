#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
ll bdn(ll n) {
    queue<ll> qu;
    qu.push(1);
    while (true) {
        ll tmp = qu.front(); qu.pop();
        if (tmp % n == 0) return tmp;
        qu.push(tmp * 10);
        qu.push(tmp * 10 + 1);
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
        cout << bdn(n) << "\n";
    }
}
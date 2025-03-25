#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll multiple(int n) {
    queue<ll> q;
    q.push(9);
    while (q.size()) {
        ll tmp = q.front();
        q.pop();
        if (tmp % n == 0) return tmp;
        q.push(tmp * 10);
        q.push(tmp * 10 + 9);
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
        cout << multiple(n) << "\n";
    }
}
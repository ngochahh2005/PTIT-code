#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        priority_queue< ll, vector<ll>, greater<ll> > pq;
        int n;
        ll tmp;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            pq.push(tmp);
        }
        ll rs = 0, s = 0;
        while (pq.size() > 1) {
            s = pq.top(); pq.pop();
            s = ((s % mod) + (pq.top() % mod)) % mod; pq.pop();
            rs = ((rs % mod) + (s % mod)) % mod;
            pq.push(s);
        }
        cout << rs << "\n";
    }
}
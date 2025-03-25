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
        int n, tmp;
        cin >> n;
        priority_queue<int, vector<int>, greater<int> > pq;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            pq.push(tmp);
        }
        ll rs = 0;
        while (pq.size() > 1) {
            int x = pq.top(); pq.pop();
            int y = pq.top(); pq.pop();
            rs += x + y;
            pq.push(x + y);
        }
        cout << rs << "\n";
    }
}
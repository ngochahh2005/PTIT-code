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
        int k;
        string s;
        cin >> k >> s;
        map<char, int> mp;
        for (char c : s) {
            mp[c]++;
        }
        priority_queue<int> pq;
        for (auto x : mp) {
            pq.push(x.second);
        }
        while (k--) {
            int tmp = pq.top(); pq.pop();
            tmp--;
            pq.push(tmp);
        }
        ll rs = 0;
        while (!pq.empty()) {
            rs += (pq.top() * pq.top());
            pq.pop();
        }
        cout << rs << "\n";
    }
}
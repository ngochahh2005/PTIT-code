#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct str {
    char ch;
    int f;
    friend bool operator<(str a, str b) {
        return a.f < b.f;
    }
};

void solve(string s, int k) {
    priority_queue<str> pq;
    ll rs = 0;

    sort(s.begin(), s.end());
    map<char, int> mp;
    for (char c : s) {
        mp[c]++;
    }
    for (auto x : mp) {
        pq.push({x.first, x.second});
    }

    while (k--) {
        if (pq.empty()) break;
        str tmp = pq.top(); pq.pop();
        tmp.f--;
        if (tmp.f != 0) pq.push(tmp);
    }

    while (pq.size()) {
        str tmp = pq.top(); pq.pop();
        rs += (ll)tmp.f * tmp.f;
    }
    cout << rs << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int k;
        cin >> k;
        string s;
        cin >> s;
        solve(s, k);
    }
}
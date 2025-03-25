#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, m;

vector<int> mul(vector<int> a, vector<int> b) {
    vector<int> c;
    map<int, int> mp;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < m; j++) {
            mp[i+j] += a[i] * b[j];
        }
    }
    for (auto x : mp) c.push_back(x.second);
    return c;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> m;
        vector<int> a(n), b(m);
        for (int i = 0; i < n; i++) cin >> a[i];
        for (int j = 0; j < m; j++) cin >> b[j];
        vector<int> rs = mul(a, b);
        for (int i = 0; i < rs.size(); i++) {
            cout << rs[i] << " ";
        }
        cout << "\n";
    }
}
#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
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
        vector<int> v;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.emplace_back(tmp);
        }
        sort(v.begin(), v.end());
        v.resize(unique(v.begin(), v.end()) - v.begin());
        if (v.size() == 1) cout << "-1\n";
        else cout << v[0] << " " << v[1] << "\n";
    }
}
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
        int n;
        ll tmp;
        cin >> n;
        vector<ll> a;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp != 0) a.emplace_back(tmp);
        }
        for (int i = 0; i < a.size(); i++) {
            cout << a[i] << " ";
        }
        for (int i = a.size(); i < n; i++) {
            cout << "0 ";
        }
        cout << "\n";
    }
}
#include <bits/stdc++.h>
#define ll unsigned long long
#define mod 1000000007
#define lmt 10000
using namespace std;

vector<ll> ug;

void ugly() {
    set<ll> se;
    while (true) {
        se.insert(1);
        for (auto x : se) {
            if (x > 1e18) break;
            ug.emplace_back(x * 2);
            ug.emplace_back(x * 3);
            ug.emplace_back(x * 5);
        }
        for (auto x : ug) {
            se.insert(x);
        }
        ug.clear();
        if (se.size() >= 1e4) break;
    }
    for (auto x : se) {
        ug.emplace_back(x);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    ugly();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        cout << ug[n-1] << "\n";
    }
}
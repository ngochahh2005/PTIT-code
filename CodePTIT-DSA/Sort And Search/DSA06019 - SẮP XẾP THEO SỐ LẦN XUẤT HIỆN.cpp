#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
struct data {
    int vl, f = 0;
    friend bool operator<(const data &a, const data &b) {
        if (a.f == b.f) return a.vl < b.vl;
        return a.f > b.f;
    }
};

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, tmp;
        cin >> n;
        map<int, int> mp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            mp[tmp]++;
        }
        vector<data> a;
        int d = 0;
        for (auto x : mp) {
            data b;
            b.vl = x.first;
            b.f = x.second;
            a.push_back(b);
        }
        sort(a.begin(), a.end());
        for (int i = 0; i < a.size(); i++) {
            for (int j = 0; j < a[i].f; j++) {
                cout << a[i].vl << " ";
            }
        }
        cout << "\n";
    }
}
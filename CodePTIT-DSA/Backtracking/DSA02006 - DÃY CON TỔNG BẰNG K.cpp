#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, k;
int a[15], b[15];

void update(vector<string> &rs) {
    string s = "[";
    int d = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) {
            if (d == 0) s += to_string(a[i]);
            else s += " " + to_string(a[i]);
            d++;
        }
    }
    s += "]";
    rs.push_back(s);
}

bool sinh() {
    int i = n-1;
    while(b[i] == 1 && i >= 0) i--;
    if (i < 0) return false;
    b[i] = 1;
    for (int j = i+1; j < n; j++) b[j] = 0;
    return true;
}

bool check() {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += (a[i] * b[i]);
    }
    if (s == k) return true;
    return false;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < n; i++) {
            cin >> a[i];
            b[i] = 0;
        }
        sort(a, a+n);
        vector<string> rs;
        while(sinh()) {
            if (check()) update(rs);
        }
        for (int i = rs.size() - 1; i >= 0; i--) cout << rs[i] << " ";
        if (rs.empty()) cout << "-1";
        cout << "\n";
    }
}
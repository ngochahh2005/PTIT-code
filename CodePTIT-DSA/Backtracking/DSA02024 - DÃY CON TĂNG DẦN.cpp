#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, a[25];
vector<int> v;
vector<string> rs;
  
void update() {
    string s = "";
    for (int i = 0; i < v.size(); i++) s += to_string(v[i]) + " ";
    rs.push_back(s);
}

void Try(int i) {
    for (int j = i; j < n; j++) {
        if (v.empty()) {
            v.push_back(a[j]);
            Try(j);
            v.pop_back();
        } else {
            if (a[j] > a[i]) {
                v.push_back(a[j]);
                if (v.size() >= 2) update();
                Try(j);
                v.pop_back();
            }
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) cin >> a[i];
    Try(0);
    sort(rs.begin(), rs.end());
    for (string x : rs) {
        cout << x << "\n";
    }
}
#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
#define mod 1000000007
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, m;
    cin >> n >> m;
    set<int> a, b;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.insert(tmp);
    }
    for (int i = 0; i < m; i++) {
        cin >> tmp;
        b.insert(tmp);
    }
    for (auto x : b) {
        if (a.find(x) != a.end()) cout << x << " ";
    }
    cout << "\n";
    for (auto x : a) {
        if (b.find(x) == b.end()) cout << x << " ";
    }
    cout << "\n";
    for (auto x : b) {
        if (a.find(x) == a.end()) cout << x << " ";
    }
    
}
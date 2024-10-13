#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, tmp;
    cin >> n;
    set<int> a;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        a.insert(tmp);
    }
    for (auto x : a) {
        cout << x << " ";
    }
}
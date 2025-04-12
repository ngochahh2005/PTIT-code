#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
bool check(pair<int, int> a, pair<int, int> b) {
    return a.second <= b.first;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];

        vector< pair<int, int> > l(n);
        int Max = a[0], Min = a[0];
        l[0] = {Min, Max};
        for (int i = 1; i < n; i++) {
            Max = max(Max, a[i]);
            Min = min(Min, a[i]);
            l[i] = {Min, Max};
        }

        vector< pair<int, int> > r(n);
        Max = Min = a[n-1];
        r[n-1] = {Min, Max};
        for (int i = n-2; i >= 0; i--) {
            Max = max(Max, a[i]);
            Min = min(Min, a[i]);
            r[i] = {Min, Max};
        }

        vector<int> v;
        for (int i = 0; i < n-1; i++) {
            if (check(l[i], r[i+1])) {
                v.push_back(i+1);
            }
        }

        cout << v.size() << "\n";
        for (int x : v) cout << x << " ";
        cout << "\n";
    }
}
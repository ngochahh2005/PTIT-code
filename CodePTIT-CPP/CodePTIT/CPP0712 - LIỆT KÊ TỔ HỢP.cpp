#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void genComb(vector<int> &a, int n, int k) {
    vector<bool> v(n);
    fill(v.begin(), v.begin() + k, true);
    do {
        for (int i = 0; i < n; i++) {
            if (v[i]) cout << a[i];
        }
        cout << " ";
    } while (prev_permutation(v.begin(), v.end()));
    cout << "\n";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(n);
        for (int i = 0; i < n; i++) {
            a[i] = i + 1;
        }
        genComb(a, n, k);
    }
}
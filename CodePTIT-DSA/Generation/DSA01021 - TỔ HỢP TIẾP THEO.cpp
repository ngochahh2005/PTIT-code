#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int a[45];

int sinh(int k, int n, set<int> se) {
    int i = k-1;
    while (a[i] == n-k+i+1 && i >= 0) i--;
    if (i < 0) return k;
    a[i]++;
    int cnt = 0;
    if (se.find(a[i]) == se.end()) cnt++;
    for (int j = i+1; j < k; j++) {
        a[j] = a[j-1] + 1;
        if (se.find(a[j]) == se.end()) cnt++;
    }
    return cnt;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        set<int> se;
        cin >> n >> k;
        for (int i = 0; i < k; i++) {
            cin >> a[i];
            se.insert(a[i]);
        }
        cout << sinh(k, n, se) << "\n";
    }
}
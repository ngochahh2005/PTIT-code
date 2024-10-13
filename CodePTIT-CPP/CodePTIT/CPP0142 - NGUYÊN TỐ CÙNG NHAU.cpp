#include <bits/stdc++.h>
#define ll long long
#define lmt 100000
using namespace std;

int sang[lmt+5];
void sangnt() {
    fill(sang, sang+lmt+5, 1);
    sang[0] = sang[1] = 0;
    for (int i = 2; i <= 316; i++) {
        if (sang[i] != 1) continue;
        sang[i] = i;
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = i;
        }
    }
    for (int i = 317; i <= lmt; i++) {
        if (sang[i] == 1) sang[i] = i;
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    int t;
    cin >> t;
    while (t--) {
        int n;
        cin >> n;
        int cnt = n;
        set<int> se;
        while (n != 1) {
            se.insert(sang[n]);
            n /= sang[n];
        }
        for (auto x : se) {
            cnt -= cnt/x;
        }
        if (sang[cnt] == cnt) cout << "1\n";
        else cout << "0\n";
    }
}
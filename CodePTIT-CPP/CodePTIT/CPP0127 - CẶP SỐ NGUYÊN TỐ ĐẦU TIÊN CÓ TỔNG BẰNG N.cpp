#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
using namespace std;

bool sang[lmt+5];
void sangnt() {
    fill(sang, sang+lmt+5, true);
    sang[0] = sang[1] = false;
    for (int i = 2; i <= 1000; i++) {
        if (!sang[i]) continue;
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = false;
        }
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
        bool check = false;
        for (int i = 2; i <= n/2; i++) {
            if (sang[i] && sang[n-i]) {
                cout << i << " " << n-i << "\n";
                check = true;
                break;
            }
        }
        if (!check) cout << "-1\n";
    }
}
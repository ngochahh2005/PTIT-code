#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int a[lmt];

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, cnt = 0, tmp;
        bool check = false;
        cin >> n;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            if (tmp > 0) a[cnt++] = tmp;
        }
        sort(a, a+cnt);
        if (a[0] >= 2 || cnt == 0) {
            cout << "1\n";
            continue;
        }
        for (int i = 1; i < cnt; i++) {
            if  (a[i] - a[i-1] > 1) {
                cout << a[i-1] + 1 << "\n";
                check = true;
                break;
            }
        }
        if (!check) cout << a[cnt-1] + 1 << "\n";
    }
}
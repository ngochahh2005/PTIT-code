#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);

    int n;
    cin >> n;
    int tmp, cnt = 0;
    for (int i = 0; i < n; i++) {
        int c1 = 0, c0 = 0;
        for (int j = 0; j < 3; j++) {
            cin >> tmp;
            if (tmp == 0) c0++;
            else c1++;
        }
        if (c1 > c0) cnt++;
    }
    cout << cnt << "\n";

}
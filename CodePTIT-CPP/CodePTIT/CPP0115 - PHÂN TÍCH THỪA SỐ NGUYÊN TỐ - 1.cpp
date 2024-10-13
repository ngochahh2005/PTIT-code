#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

void phanTich(int n) {
    if (n < 2) {
        cout << "\n";
        return ;
    }
    int cnt = 0;
    while (n % 2 == 0) {
        cnt++;
        n /= 2;
    }
    if (cnt != 0) {
        cout << "2 " << cnt << " ";
        cnt = 0;
    }
    int x = n;
    for (int i = 3; i <= x; i+= 2) {
        if (n % i != 0) continue;
        while (n % i == 0) {
            n /= i;
            cnt++;
        }
        cout << i << " " << cnt << " ";
        cnt = 0;
    }
    cout << "\n";
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
        phanTich(n);
    }
}
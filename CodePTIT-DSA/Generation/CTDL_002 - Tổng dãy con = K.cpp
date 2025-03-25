#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, b[1005], a[1005];

bool sinh() {
    int i = n-1;
    while (b[i] == 1 && i >= 0) i--;
    if (i < 0) return false;
    b[i] = 1;
    for (int j = i+1; j < n; j++) b[j] = 0;
    return true;
}

int sum() {
    int s = 0;
    for (int i = 0; i < n; i++) {
        s += a[i] * b[i];
    }
    return s;
}

void in() {
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) cout << a[i] << " ";
    }
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int k, cnt = 0;
    cin >> n >> k;
    for (int i = 0; i < n; i++) cin >> a[i];
    while (sinh()) {
        if (sum() == k) {
            in();
            cnt++;
        }
    }
    cout << cnt;
}
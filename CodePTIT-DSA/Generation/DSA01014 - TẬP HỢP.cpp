#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int b[25], a[25];
int n, k, s;

bool sinh() {
    int i = n-1;
    while (b[i] == 1 && i >= 0) i--;
    if (i < 0) return false;
    b[i] = 1;
    for (int j = i+1; j < n; j++) b[j] = 0;
    return true;
}

bool check() {
    int d = 0, rs = 0;
    for (int i = 0; i < n; i++) {
        if (b[i] == 1) d++; 
        rs += (a[i] * b[i]);
    }
    if (d == k && rs == s) return true;
    return false;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    while (true) {
        cin >> n >> k >> s;
        if (n == k && k == s && s == 0) return 0;
        for (int i = 0; i < n; i++) {
            b[i] = 0;
            a[i] = i+1;
        }
        int cnt = 0;
        while (sinh()) {
            if (check()) cnt++;
        }
        cout << cnt << "\n";
    }
}
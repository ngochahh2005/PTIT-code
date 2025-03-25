#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[20], n;

void in() {
    for (int i = 0; i < n; i++) cout << a[i];
    cout << "\n";
}

bool sinh() {
    int i = n-1;
    while (a[i] == 8 && i >= 0) i--;
    if (i < 0) return false;
    a[i] = 8;
    for (int j = i+1; j < n; j++) a[j] = 6;
    return true;
}

bool check() {
    if (a[0] != 8 || a[n-1] != 6) return false;
    int c6 = 0, c8 = 0;
    for (int i = 1; i < n; i++) {
        if (a[i] == a[i-1] && a[i] == 6) {
            c6 += (c6 == 0) ? 2 : 1;
        } else c6 = 0;
        if (a[i] == a[i-1] && a[i] == 8) {
            c8 += (c8 == 0) ? 2 : 1;
        }
        else c8 = 0;
        if (c6 > 3 || c8 > 1) return false;
    }
    return true;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 0; i < n; i++) a[i] = 6;
    do {
        if (check()) in();
    } while (sinh());
}
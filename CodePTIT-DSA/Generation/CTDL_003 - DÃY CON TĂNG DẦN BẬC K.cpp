#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[105], b[105];
int n, k;

bool sinh() {
    int i = k-1;
    while (b[i] == n-k+i && i >= 0) i--;
    if (i < 0) return false;
    b[i]++;
    for (int j = i+1; j < k; j++) b[j] = b[j-1] + 1;
    return true;
}

bool check() {
    for (int i = 0; i < k-1; i++) {
        if (a[b[i]] >= a[b[i+1]]) return false;
    }
    return true;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = i;
    }
    int cnt = 0;
    do {
        if (check()) cnt++;
    } while (sinh());
    cout << cnt;
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[15], n;

void print(int cnt) {
    if (cnt == 1) {
        cout << "(" << a[0] << ") ";
        return ;
    }
    for (int i = 0; i < cnt; i++) {
        if (i == 0) cout << "(" << a[i];
        else cout << " " << a[i];
    }
    cout << ") ";
}

void Try(int i, int s, int cnt) {
    if (s == n) {
        print(cnt);
        return ;
    }
    if (s > n) return ;
    for (int j = i; j >= 1; j--) {
        if (j + s <= n) {
            a[cnt] = j;
            Try(j, s + j, cnt+1); 
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        Try(n, 0, 0);
        cout << "\n";
    }
}
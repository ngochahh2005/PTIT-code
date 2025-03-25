#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, a[15];
bool used[15];

void print() {
    for (int i = 1; i <= n; i++) cout << a[i];
    cout << "\n";
}

void Try(int i) {
    for (int j = 1; j <= n; j++) {
        if (!used[j] && abs(j - a[i-1]) > 1) {
            a[i] = j;
            used[j] = true;
            if (i == n) print();
            else Try(i+1);
            used[j] = false;
        }
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    a[0] = 20;
    while (t--) {
        cin >> n;
        Try(1);
    }
}
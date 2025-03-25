#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, k, a[15];

void print() {
    for (int i = 1; i <= k; i++) {
        char c = 'A' + a[i];
        cout << c;
    }
    cout << "\n";
}

void Try(int i) {
    for (int j = a[i-1]; j <= n; j++) {
        a[i] = j;
        if (i == k) print();
        else Try(i+1);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char c;
    cin >> c >> k;
    n = c - 'A';
    Try(1);
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[15], n;

void print() {
    for (int i = 0; i < n; i++) cout << a[i];
    cout << " ";
}

void Try(int i, int d) {
    if (i == n) {
        print();
        return ;
    }
    if (d % 2 == 0) {
        a[i] = 0;
        Try(i+1, d);
        a[i] = 1;
        Try(i+1, d+1); 
    } else {
        a[i] = 1;
        Try(i+1, d+1);
        a[i] = 0;
        Try(i+1, d);
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
        for (int i = 0; i < n; i++) a[i] = 0;
        Try(0, 0);
        cout << "\n";
    }
}
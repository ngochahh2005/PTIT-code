#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

void genPer(int a[], int n) {
    do {
        for (int i = 0; i < n; i++) cout << a[i];
        cout << " ";
    } while(next_permutation(a, a+n));
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
        int a[n];
        for (int i = 0; i < n; i++) a[i] = i+1;
        genPer(a, n);
    }
}
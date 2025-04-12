#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void nhap(ll a[], int n) {
    for (int i = 0; i < n; i++) cin >> a[i];
}

void giao(ll a[], ll b[], ll c[], int n1, int n2, int n3) {
    int i = 0, j = 0, k = 0;
    bool ck = false;
    while (i < n1 && j < n2 && k < n3) {
        if (a[i] == b[j] && a[i] == c[k]) {
            cout << a[i] << " ";
            ck = true;
            i++; 
            j++; 
            k++;
        } else if (a[i] <= b[j] && a[i] <= c[k]) i++;
        else if (b[j] <= a[i] && b[j] <= c[k]) j++;
        else k++;
    }
    if (!ck) cout << "-1";
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n1, n2, n3;
        cin >> n1 >> n2 >> n3;
        ll a[n1], b[n2], c[n3];
        nhap(a, n1);
        nhap(b, n2);
        nhap(c, n3);
        giao(a, b, c, n1, n2, n3);
    }
}
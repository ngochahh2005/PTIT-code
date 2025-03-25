#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void in(int a[], int n, int step) {
    cout << "Buoc " << step << ":";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << "\n";
}

void interchangeSort(int a[], int n) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
        in(a, n, i+1);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    interchangeSort(a, n);
}
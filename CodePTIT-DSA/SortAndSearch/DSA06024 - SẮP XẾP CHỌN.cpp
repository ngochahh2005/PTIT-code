#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (a[min_idx] > a[j]) min_idx = j;
        }
        swap(a[i], a[min_idx]);
        cout << "Buoc " << i+1 << ": ";
        for (int j = 0; j < n; j++) {
            cout << a[j] << " ";
        }
        cout << "\n";
    }
}
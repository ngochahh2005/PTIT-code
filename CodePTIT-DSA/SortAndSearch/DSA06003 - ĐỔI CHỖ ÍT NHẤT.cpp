#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int selectionSort(int a[], int n) {
    int cnt = 0;
    for (int i = 0; i < n-1; i++) {
        int min_idx = i;
        for (int j = i+1; j < n; j++) {
            if (a[min_idx] > a[j]) min_idx = j;
        }
        if (min_idx == i) continue;
        swap(a[min_idx], a[i]);
        cnt++;
    }
    return cnt;
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
        for (int i = 0; i < n; i++) cin >> a[i];
        cout << selectionSort(a, n) << "\n";
    }
}
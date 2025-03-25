#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, k;
int a[1005];

void pre_gen() {
    int i = k-2;
    while (a[i + 1] == a[i] + 1 && i >= 0) i--;
    if (i < 0) {
        for (int j = n-k; j < n; j++) cout << j + 1 << " ";
        cout << "\n";
        return ;
    }
    i++;
    a[i]--;
    for (int j = i+1; j < k; j++) {
        a[j] = n - k + j + 1;
    }
    for (int j = 0; j < k; j++) cout << a[j] << " ";
    cout << "\n";
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n >> k;
        for (int i = 0; i < k; i++) cin >> a[i];
        pre_gen();
    }
}
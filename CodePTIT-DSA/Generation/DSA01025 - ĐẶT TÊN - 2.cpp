#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void in(vector<int> a, int k) {
    for (int i = 0; i < k; i++) {
        char c = (char)a[i] + 'A';
        cout << c;
    }
    cout << "\n";
}

bool comb(vector<int> &a, int n, int k) {
    int i = k-1;
    while (a[i] == n-k+i && i >= 0) i--;
    if (i < 0) return false;
    a[i]++;
    for (int j = i+1; j < k; j++) a[j] = a[j-1] + 1;
    return true;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        int n, k;
        cin >> n >> k;
        vector<int> a(k);
        for (int i = 0; i < k; i++) a[i] = i;
        do {
            in(a, k);
        } while (comb(a, n, k));
    }
}
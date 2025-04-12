#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void print(vector<int> v, int n) {
    for (int i = 0; i < n; i++) cout << v[i] << " ";
    cout << "\n";
}

int bitonic(int n) {
    int a[n];
    vector<int> lis(n, 1), si(n, 1);
    vector<int> lds(n, 1), sd(n, 1);

    for (int i = 0; i < n; i++) {
        cin >> a[i];
        si[i] = sd[i] = a[i];
    }
    
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < i; j++) {
            if (a[j] < a[i]) {
                lis[i] = max(lis[i], lis[j] + 1);
                si[i] = max(si[i], si[j] + a[i]);
            }
        }
    }
    
    for (int i = n-1; i >= 0; i--) {
        for (int j = n-1; j > i; j--) {
            if (a[j] < a[i]) {
                lds[i] = max(lds[i], lds[j] + 1);
                sd[i] = max(sd[i], sd[j] + a[i]);
            }
        }
    }
    
    int rs = 0;
    for (int i = 0; i < n; i++) {
        rs = max(rs, si[i] + sd[i] - a[i]);
    }
    return rs;
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
        cout << bitonic(n) << "\n";
    }
}
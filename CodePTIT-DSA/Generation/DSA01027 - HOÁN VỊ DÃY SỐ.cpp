#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;
vector<int> a, b;

void in() {
    for (int i = 0; i < n; i++) {
        cout << a[b[i]] << " ";
    }
    cout << "\n";
}

bool sinh() {
    int k = n-2, l = n-1;
    while (b[k] > b[k+1] && k >= 0) k--;
    if (k < 0) return false;
    while (b[k] > b[l]) l--;
    swap(b[k], b[l]);
    reverse(b.begin() + k + 1, b.end());
    return true;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    a.resize(n);
    b.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
        b[i] = i;
    }
    sort(a.begin(), a.end());
    do {
        in();
    } while (sinh());
}
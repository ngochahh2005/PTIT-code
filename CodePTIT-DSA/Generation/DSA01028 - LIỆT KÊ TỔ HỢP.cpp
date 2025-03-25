#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, k;
vector<int> a, b;

void in() {
    for (int i = 0; i < k; i++) cout << a[b[i]] << " ";
    cout << "\n";
}

bool sinh() {
    int i = k-1;
    while (b[i] == n-k+i && i >= 0) i--;
    if (i < 0) return false;
    b[i]++;
    for (int j = i+1; j < k; j++) b[j] = b[j-1] + 1;
    return true;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    set<int> se;
    int tmp;
    for (int i = 0; i < n; i++) {
        cin >> tmp;
        se.insert(tmp);
    }
    a.resize(se.size());
    b.resize(k);
    n = 0;
    for (auto x : se) {
        a[n++] = x;
    }
    for (int i = 0; i < k; i++) b[i] = i;
    do {
        in();
    } while (sinh());
}
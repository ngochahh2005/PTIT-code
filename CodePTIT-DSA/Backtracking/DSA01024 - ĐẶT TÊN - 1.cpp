#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, k;
string s[30];
vector<int> a;

void in() {
    for (int i = 0; i < k; i++) cout << s[a[i]] << " ";
    cout << "\n";
}

void Try(int i) {
    if (i == k) {
        in();
        return ;
    }
    int j = (i == 0) ? 0 : a[i-1] + 1;
    for (; j <= n-k+i; j++) {
        a[i] = j;
        Try(i+1);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    set<string> se;
    string str;
    a.resize(n);
    for (int i = 0; i < n; i++) {
        cin >> str;
        se.insert(str);
    }
    n = 0;
    for (auto x : se) s[n++] = x;
    sort(s, s+n);
    Try(0);
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, k;
vector<string> nm;
int a[15];

void print() {
    for (int i = 1; i <= k; i++) cout << nm[a[i] - 1] << " ";
    cout << "\n";
}

void Try(int i) {
    for (int j = a[i-1] + 1; j <= n-k+i; j++) {
        a[i] = j;
        if (i == k) print();
        else Try(i+1);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    set<string> se;
    string s;
    while (n--) {
        cin >> s;
        se.insert(s);
    }
    for (auto x : se) {
        nm.push_back(x);
    }
    n = se.size();
    Try(1);
}
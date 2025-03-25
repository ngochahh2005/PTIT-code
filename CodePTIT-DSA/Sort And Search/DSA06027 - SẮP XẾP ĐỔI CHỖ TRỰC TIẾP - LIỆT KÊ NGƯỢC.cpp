#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void interchangeSort(int a[], int n, vector<string> &s) {
    for (int i = 0; i < n-1; i++) {
        for (int j = i+1; j < n; j++) {
            if (a[i] > a[j]) swap(a[i], a[j]);
        }
        string rs = "Buoc " + to_string(i+1) + ":";
        for (int j = 0; j < n; j++) rs += " " + to_string(a[j]);
        s.emplace_back(rs);
    }
}

void in(vector<string> s) {
    int n = s.size() - 1;
    for (int i = n; i >= 0; i--) cout << s[i] << "\n";
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
        vector<string> s;
        int a[n];
        for (int i = 0; i < n; i++) cin >> a[i];
        interchangeSort(a, n, s);
        in(s);
    }
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int a[15][15], n, k;
int b[15];
vector< vector<int> > rs;

bool sinh() {
    int i = n-2, j = n-1;
    while (b[i] > b[i+1] && i >= 0) i--;
    if (i < 0) return false;
    while (b[i] > b[j]) j--;
    swap(b[i], b[j]);
    reverse(b+i+1, b+n);
    return true;
}

void add() {
    vector<int> tmp;
    for (int i = 0; i < n; i++) {
        tmp.push_back(b[i]);
    }
    rs.push_back(tmp);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n >> k;
    for (int i = 0; i < n; i++) {
        for (int j = 0; j < n; j++) {
            cin >> a[i][j];
        }
    }
    for (int i = 0; i < n; i++) b[i] = i;
    do {
        int s = 0;
        for (int i = 0; i < n; i++) {
            s += a[i][b[i]];
        }
        if (s == k) add();
    } while (sinh());
    cout << rs.size() << "\n";
    for (int i = 0; i < rs.size(); i++) {
        for (int j = 0; j < n; j++) {
            cout << rs[i][j] + 1 << " ";
        }
        cout << "\n";
    }
}
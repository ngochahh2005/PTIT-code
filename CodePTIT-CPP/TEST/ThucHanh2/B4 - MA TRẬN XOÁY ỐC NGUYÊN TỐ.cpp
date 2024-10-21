#include <bits/stdc++.h>
#define lmt 1000000
using namespace std;

vector<int> pr;
bool sang[lmt+5];
int a[25][25];

void sangnt() {
    fill(sang, sang + lmt + 5, true);
    sang[0] = sang[1] = false;
    for (int i = 2; i <= 1000; i++) {
        if (!sang[i]) continue;
        pr.push_back(i);
        for (int j = i*i; j <= lmt; j += i) {
            sang[j] = false;
        }
    }
    for (int j = 1001; j <= lmt; j++) {
        if (sang[j]) pr.push_back(j);
    }
}

void trenPhai(int, int, int, int, int);
void duoiTrai(int, int, int, int, int);

void trenPhai(int h1, int h2, int c1, int c2, int idx) {
    for (int i = c1; i <= c2; i++) {
        a[h1][i] = pr[idx++];
    }
    for (int i = h1 + 1; i <= h2; i++) {
        a[i][c2] = pr[idx++];
    }
    if (h1 < h2 && c1 < c2) duoiTrai(h1 + 1, h2, c1, c2 - 1, idx);
}

void duoiTrai(int h1, int h2, int c1, int c2, int idx) {
    for (int i = c2; i >= c1; i--) {
        a[h2][i] = pr[idx++];
    }
    for (int i = h2 - 1; i >= h1; i--) {
        a[i][c1] = pr[idx++];
    }
    if (h1 < h2 && c1 < c2) trenPhai(h1, h2 - 1, c1 + 1, c2, idx);
}

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    int t;
    cin >> t;
    for (int o = 1; o <= t; o++) {
        int n;
        cin >> n;
        trenPhai(0, n-1, 0, n-1, 0);
        cout << "Test " << o << ":\n";
        for (int i = 0; i < n; i++) {
            for (int j = 0; j < n; j++) {
                cout << a[i][j] << " ";
            }
            cout << "\n";
        }
    }
}
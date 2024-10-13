#include <bits/stdc++.h>
#define ll long long
#define lmt 1000005
using namespace std;

int a[25];

void display(int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i];
    }
    cout << " ";
}

void binaryGen(int n, bool &ck) {
    int i = n-1;
    while (a[i] == 1 && i >= 0) i--;
    if (i < 0) ck = true;
    else {
        a[i] = 1;
        for (int j = i+1; j < n; j++) {
            a[j] = 0;
        }
    }
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
        bool ck = false;
        fill(a, a+n, 0);
        while (!ck) {
            display(n);
            binaryGen(n, ck);
        }
        cout << "\n";
    }
}
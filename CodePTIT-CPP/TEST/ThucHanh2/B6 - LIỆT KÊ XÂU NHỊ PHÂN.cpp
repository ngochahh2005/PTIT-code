#include <bits/stdc++.h>
using namespace std;

int a[25];

void display(int n) {
    for (int i = 0; i < n; i++) cout << a[i];
    cout << " ";
}

void binGen(int n) {
    int i = n-1;
    while (a[i] == 1 && i >= 0) i--;
    if (i < 0) {
        cout << "\n";
        return ;
    }
    a[i] = 1;
    for (int j = i+1; j < n; j++) a[j] = 0;
    display(n);
    binGen(n);
}

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while(t--) {
        int n;
        cin >> n;
        for (int i = 0; i < n; i++) a[i] = 0;
        display(n);
        binGen(n);
    }
}
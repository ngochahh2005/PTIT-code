#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n, a[1005];

void in() {
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

bool check() {
    int l = 0, r = n-1;
    while (l < r) {
        if (a[l++] != a[r--]) return false;
    } 
    return true;
}

bool sinh() {
    int i = n-1;
    while (a[i] == 1 && i >= 0) i--;
    if (i < 0) return true;
    a[i] = 1;
    for (int j = i+1; j < n; j++) a[j] = 0;
    return false;
}


  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    do {
        if (check()) in();
    } while (!sinh());
}
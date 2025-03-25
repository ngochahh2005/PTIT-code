#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
int n, a[10];
bool used[10];

bool phuAm(int x) {
    return (x != 0 && x != 4);
}

bool check() {
    for (int i = 1; i < n-1; i++) {
        if (phuAm(a[i-1]) && !phuAm(a[i]) && phuAm(a[i+1])) return false;
    }
    return true;
}

void print() {
    for (int i = 0; i < n; i++) {
        char c = 'A' + a[i];
        cout << c;
    }
    cout << "\n";
}

void Try(int i) {
    for (int j = 0; j < n; j++) {
        if (!used[j]) {
            used[j] = true;
            a[i] = j;
            if (i == n-1 && check()) print();
            else Try(i+1);
            used[j] = false;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    char c;
    cin >> c;
    n = c - 'A' + 1;
    Try(0);
}
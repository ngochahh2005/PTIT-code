#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

char ch[20];
int n;

void in() {
    for (int i = 0; i < n; i++) cout << ch[i];
    cout << "\n";
}

bool check() {
    if (ch[0] != 'H' || ch[n-1] != 'A') return false;
    for (int i = 1; i < n; i++) {
        if (ch[i] == 'H' && ch[i-1] == 'H') return false;
    }
    return true;
}

bool sinh() {
    int i = n-1;
    while (ch[i] == 'H' && i >= 0) i--;
    if (i < 0) return false;
    ch[i] = 'H';
    for (int j = i+1; j < n; j++) ch[j] = 'A';
    return true;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int t;
    cin >> t;
    while (t--) {
        cin >> n;
        for (int i = 0; i < n; i++) ch[i] = 'A';
        do {
            if (check()) in();
        } while (sinh());
    }   
}
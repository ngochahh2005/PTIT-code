#include <bits/stdc++.h>
#define ll long long
#define lmt 1000000
using namespace std;

bool sang[lmt+5];
void sangnt() {
    fill(sang, sang+lmt+5, true);
    sang[0] = sang[1] = false;
    for (int i = 2; i <= 1000; i++) {
        if (!sang[i]) continue;
        for (int j = i*i; j <= lmt; j+=i) {
            sang[j] = false;
        }
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    sangnt();
    int a, b;
    cin >> a >> b;
    if (a > b) swap(a, b);
    for (int i = a+1; i < b; i++) {
        if (sang[i]) cout << i << " ";
    }
}
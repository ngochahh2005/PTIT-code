#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int n;
char ch[15];

void in() {
    for (int i = 0; i < n; i++) cout << ch[i];
    cout << " ";
}

bool sinh() {
    int i = n-1;
    while (ch[i] == 'B' && i >= 0) i--;
    if (i < 0) return false;
    ch[i] = 'B';
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
            in();
        } while (sinh());
        cout << "\n";
    }   
}
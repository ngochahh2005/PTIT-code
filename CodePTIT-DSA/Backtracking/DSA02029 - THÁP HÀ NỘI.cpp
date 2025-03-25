#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void Try(int n, char a, char b, char c) {
    if (n == 1) {
        cout << a << " -> " << c << "\n";
        return ;
    }
    Try(n-1, a, c, b);
    cout << a << " -> " << c << "\n";
    Try(n-1, b, a, c);
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    Try(n, 'A', 'B', 'C');
}
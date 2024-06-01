#include <bits/stdc++.h>
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
	string n;
    while (true) {
        cin >> n;
        if (n == "0") break;
        long long s = 0;
        for (int i = 0; i < n.length(); i++) {
            int x = n[i] - '0';
            if (x > 4) x--;
            s = s*9 + x;
        }
        cout << n << ": " << s << "\n";
    }
}

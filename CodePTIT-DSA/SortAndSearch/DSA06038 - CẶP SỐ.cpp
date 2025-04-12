#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

ll bit[lmt+5];
int a[lmt+5], n;

void update(int idx, int vl) {
    while (idx <= lmt) {
        bit[idx] += vl;
        idx += idx & -idx;
    }
}

ll getSum(int idx) {
    ll rs = 0;
    while (idx > 0) {
        rs += bit[idx];
        idx -= idx & -idx;
    }
    return rs;
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    cin >> n;
    for (int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    ll rs = 0;
    stack<int> st;
    for (int i = n; i >= 1; i--) {
        if (a[i] % 2 == 0) {
            rs += getSum(a[i] - 1);
            st.push(a[i]);
        } else {
            while (!st.empty()) {
                update(st.top(), 1);
                st.pop();
            }
        }
    }
    cout << rs;
}
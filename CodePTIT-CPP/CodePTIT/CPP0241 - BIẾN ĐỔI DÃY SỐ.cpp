#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

int merge(vector<int> v, int n) {
    int cnt = 0;
    int l = 0, r = n-1;
    while (l < r) {
        if (v.size() == 1) break;
        if (v[l] != v[r]) {
            if (v[l] < v[r]) {
                v[l] = v[l] + v[l+1];
                v.erase(v.begin()+l+1);
            } else {
                v[r] = v[r] + v[r-1];
                v.erase(v.begin() + r - 1);
            }
            r--;
            cnt++;
        } else {
            l++;
            r--;
        }
    }
    return cnt;
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
        vector<int> v;
        int tmp;
        for (int i = 0; i < n; i++) {
            cin >> tmp;
            v.push_back(tmp);
        }
        cout << merge(v, n) << "\n";
    }
}

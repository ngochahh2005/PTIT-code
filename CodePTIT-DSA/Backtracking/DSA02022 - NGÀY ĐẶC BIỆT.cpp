#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    vector<string> d = {"02", "20", "22"};
    vector<string> m = {"02"};
    vector<string> y = {"2000", "2002", "2020", "2022", "2200", "2202", "2220", "2222"};

    for (int i = 0; i < d.size(); i++) {
        for (int j = 0; j < m.size(); j++) {
            for (int k = 0; k < y.size(); k++) {
                cout << d[i] << "/" << m[j] << "/" << y[k] << "\n";
            }
        }
    }
}
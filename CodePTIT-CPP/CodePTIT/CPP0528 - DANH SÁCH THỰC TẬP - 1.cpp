#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct ds {
    int tt;
    string id, nm, cl, em, dn;
};

bool cmp(ds a, ds b) {
    return a.nm < b.nm;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n, q;
    cin >> n;
    ds a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].id;
        cin.ignore();
        getline(cin, a[i].nm);
        cin >> a[i].cl >> a[i].em >> a[i].dn;
        a[i].tt = i+1;
    }
    cin >> q;
    sort(a, a+n, cmp);
    string tmp;
    while (q--) {
        cin >> tmp;
        for (int i = 0; i < n; i++) {
            if (a[i].dn == tmp)
            cout << a[i].tt << " " << a[i].id << " " << a[i].nm << " " << a[i].cl << " " << a[i].em << " " << a[i].dn << "\n";
        }
    }
}
#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

struct job {
    int id, dl, pf;
};

bool cmp(job a, job b) {
    return a.pf > b.pf;
}

void sortJob(job a[], int n, int maxDl) {
    sort(a, a+n, cmp);
    vector<int> sl(maxDl + 1, -1);
    int cnt = 0, maxPf = 0;
    for (int i = 0; i < n; i++) {
        for (int j = a[i].dl; j > 0; j--) {
            if (sl[j] == -1) {
                sl[j] = a[i].id;
                cnt++;
                maxPf += a[i].pf;
                break;
            }
        }
    }
    cout << cnt << " " << maxPf << "\n";
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
        job a[n];
        int maxDl = 0;
        for (int i = 0; i < n; i++) {
            cin >> a[i].id >> a[i].dl >> a[i].pf;
            maxDl = max(maxDl, a[i].dl);
        }
        sortJob(a, n, maxDl);
    }
}
#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct nguoi {
    string nm;
    string ns;
    int ng, t, na;

    int chuyen(string s) {
        int res = 0;
        for (int i = 0; i < s.length(); i++) {
            res = res * 10 + (s[i] - '0');
        }
        return res;
    }

    void tach() {
        stringstream ss(ns);
        string w, ngay, thang, nam;
        int n = 0;
        while (getline(ss, w, '/')) {
            if (n == 0) ngay = w;
            else if (n == 1) thang = w;
            else nam = w;
            n++;
        }
        ng = chuyen(ngay);
        t = chuyen(thang);
        na = chuyen(nam);
    }
};

string giaNhat(nguoi a[], int n) {
    nguoi ma;
    ma.na = 9999;
    ma.t = 12;
    ma.ng = 31;
    for (int i = 0; i < n; i++) {
        if (ma.na > a[i].na) {
            ma = a[i];
        } else if (ma.na == a[i].na) {
            if (ma.t > a[i].t) {
                ma = a[i];
            } else if (ma.t == a[i].t) {
                if (ma.ng > a[i].ng) {
                    ma = a[i];
                }
            }
        }
    }
    // cout << ma.nm << " " << ma.ns << "\n";
    return ma.nm;
}

string treNhat(nguoi a[], int n) {
    nguoi mi;
    mi.na = 0;
    mi.t = 0;
    mi.ng = 0;
    for (int i = 0; i < n; i++) {
        if (mi.na < a[i].na) {
            mi = a[i];
        } else if (mi.na == a[i].na) {
            if (mi.t < a[i].t) {
                mi = a[i];
            } else if (mi.t == a[i].t) {
                if (mi.ng < a[i].ng) {
                    mi = a[i];
                }
            }
        }
    }
    // cout << mi.nm << " " << mi.ns << "\n";
    return mi.nm;
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    nguoi a[n];
    for (int i = 0; i < n; i++) {
        cin >> a[i].nm >> a[i].ns;
        a[i].tach();
        // cout << a[i].ng << " " << a[i].t << " " << a[i].na << "\n";
    }
    cout << treNhat(a, n) << "\n" << giaNhat(a, n);
}
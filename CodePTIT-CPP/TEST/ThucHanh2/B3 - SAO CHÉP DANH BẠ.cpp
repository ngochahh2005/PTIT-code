#include <bits/stdc++.h>
using namespace std;

int ckNg(string s) {
    for (int i = 0; i < s.size(); i++) {
        if (s[i] == '/') return 1;
    }
    return 0;
}

struct data{
    string ng, ten, so;
    void setNgay(string s) {
        string res;
        for (int i = 0; i < s.size(); i++) {
            if ((s[i] >= '0' && s[i] <= '9') || s[i] == '/') res.push_back(s[i]);
        }
        ng = res;
    }
    void setten(string s) {
        ten = s;
    }
    void setso(string s) {
        so = s;
    }
    void out() {
        cout << ten << ": " << so << " " << ng << "\n";
    }
    string getten() {
        return ten;
    }
};

bool cmp(data a, data b) {
    string x = a.getten(), y = b.getten();
    vector<string> s1, s2;
    string s;
    for (int i = 0; i < x.size(); i++) {
        if (x[i] != ' ') s.push_back(x[i]);
        else {
            s1.push_back(s);
            s.clear();
        }
    }
    s1.push_back(s);
    s.clear();
    for (int i = 0; i < y.size(); i++) {
        if (y[i] != ' ') s.push_back(y[i]);
        else {
            s2.push_back(s);
            s.clear();
        }
    }
    s2.push_back(s);
    s.clear();
    if (s1[s1.size() - 1] == s2[s2.size() - 1]) return s1 < s2;
    return s1[s1.size() - 1] < s2[s2.size() - 1];
}

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    freopen("SOTAY.txt", "r", stdin);
    freopen("DIENTHOAI.txt", "w", stdout);
    int d = 1;
    string s, ngay;
    data a;
    vector<data> l;
    while(getline(cin, s)) {
        if (ckNg(s) == 1) ngay = s;
        else {
            if (d == 1) {
                a.setten(s);
                a.setNgay(ngay);
            } else {
                a.setso(s);
                a.setNgay(ngay);
            }
            d++;
        }
        if (d > 2) {
            l.push_back(a);
            d = 1;
        }
    }
    sort(l.begin(), l.end(), cmp);
    for (int i = 0; i < l.size(); i++) {
        l[i].out();
    }
}
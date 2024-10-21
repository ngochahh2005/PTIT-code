#include <bits/stdc++.h>
#define ll long long
using namespace std;

struct nhanvien{
    string nm, cv;
    ll l, snc;
};

int main () {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    nhanvien a;
    getline(cin, a.nm);
    cin >> a.l >> a.snc >> a.cv;
    cout << "NV01 " << a.nm << " " << a.l * a.snc << " ";
    ll thuong = 0;
    if (a.snc >= 25) thuong = 20*a.l*a.snc/100;
    else if (a.snc >= 22) thuong = 10*a.l*a.snc/100;
    ll pc = 0;
    if (a.cv == "GD") pc = 250000;
    else if (a.cv == "PGD") pc = 200000;
    else if (a.cv == "TP") pc = 180000;
    else pc = 150000;
    ll s = a.l * a.snc + thuong + pc;
    cout << thuong << " " << pc << " " << s;
}
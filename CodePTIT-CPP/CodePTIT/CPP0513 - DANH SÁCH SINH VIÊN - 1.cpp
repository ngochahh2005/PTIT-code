#include <bits/stdc++.h>
#define ll long long
#define lmt 100005
using namespace std;

struct SinhVien {
    string nm, bd, l, id;
    float d;

    void chBD() {
        string s[3];
        int n = 0;
        stringstream ss(bd);
        string w;
        while (getline(ss, w, '/')) {
            s[n++] = w;
        }
        for (int i = 0; i < 3; i++) {
            if (s[i].length() == 1) s[i] = "0" + s[i];
        }
        bd = s[0] + "/" + s[1] + "/" + s[2]; 
    }

    void chMSV(int n) {
        if (n >= 10) id = "B20DCCN0" + to_string(n);
        else id = "B20DCCN00" + to_string(n);
    }
};

void nhap(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        cin.ignore();
        getline(cin, a[i].nm); 
        cin >> a[i].l >> a[i].bd >> a[i].d;
        a[i].chBD();
        a[i].chMSV(i+1);
    }
}

void in(SinhVien a[], int n) {
    for (int i = 0; i < n; i++) {
        cout << a[i].id << " " << a[i].nm << " " << a[i].l << " " << a[i].bd << " ";
        cout << fixed << setprecision(2) << a[i].d << "\n";
    }
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    struct SinhVien ds[50];
    int N;
    cin >> N;
    nhap(ds, N);
    in(ds, N);
    return 0;
}
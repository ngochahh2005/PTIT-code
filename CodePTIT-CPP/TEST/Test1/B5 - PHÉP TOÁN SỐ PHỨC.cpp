#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

struct SoPhuc {
    int thuc, ao;
};

SoPhuc binh_phuong_tong(SoPhuc a, SoPhuc b) {
    SoPhuc c;
    c.thuc = a.thuc + b.thuc;
    c.ao = a.ao + b.ao;
    int th = c.thuc * c.thuc - c.ao * c.ao;
    int im = 2 * c.thuc * c.ao;
    c.thuc = th;
    c.ao = im;
    return c;
}

void hien_thi(SoPhuc a) {
    cout << a.thuc << " + " << a.ao << "i";
}

int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    
    int t;
	cin >> t;
	while (t--) {
		SoPhuc A;
		SoPhuc B;
		cin >> A.thuc >> A.ao >> B.thuc >> B.ao;
		SoPhuc C = binh_phuong_tong(A, B);
		hien_thi(C);
		cout << endl;
	}
}
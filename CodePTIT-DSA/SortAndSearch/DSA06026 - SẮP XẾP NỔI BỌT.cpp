#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void in(int a[], int n, int step) {
    cout << "Buoc " << step << ":";
    for (int i = 0; i < n; i++) cout << " " << a[i];
    cout << "\n";
}

void bubbleSort(int a[], int n) {
    for (int i = 0; i < n; i++) {
        bool ck = false;
        for (int j = 0; j < n-i-1; j++) {
            if (a[j] > a[j+1]) {
                swap(a[j], a[j+1]);
                ck = true;
            }
        }
        if (!ck) break;
        in(a, n, i+1);
    }
}
  
int main() {
    std::ios_base::sync_with_stdio(0);
    cin.tie(0);
    cout.tie(0);
    int n;
    cin >> n;
    int a[n];
    for (int i = 0; i < n; i++) cin >> a[i];
    bubbleSort(a, n);
}
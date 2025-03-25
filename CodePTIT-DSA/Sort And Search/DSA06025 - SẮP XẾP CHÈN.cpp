#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;

void in(int a[], int n, int step) {
    cout << "Buoc " << step << ": ";
    for (int i = 0; i < n; i++) cout << a[i] << " ";
    cout << "\n";
}

void insertionSort(int a[], int n) {
    in(a, 1, 0);
    for (int i = 1; i < n; i++) {
        int key = a[i];
        int j = i-1;
        while (j >= 0 && a[j] > key) {
            a[j+1] = a[j];
            j--;
        }
        a[j+1] = key;
        in(a, i+1, i);
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
    insertionSort(a, n);
}
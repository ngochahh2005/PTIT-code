#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
#define lmt 1000000
using namespace std;
  
void in(vector<int> a) {
    cout << "[";
    for (int i = 0; i < a.size(); i++) {
        if (i == a.size() - 1) cout << a[i];
        else cout << a[i] << " ";
    }
    cout << "]\n";
}

void backTrack(vector<int>&a) {
    if (a.size() == 1) {
        in(a);
        return ;
    }
    in(a);
    for (int i = 0; i < a.size()-1; i++) {
        a[i] = a[i] + a[i+1];
    }
    a.pop_back();
    backTrack(a);
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
        vector<int> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];
        backTrack(a);
    }
}
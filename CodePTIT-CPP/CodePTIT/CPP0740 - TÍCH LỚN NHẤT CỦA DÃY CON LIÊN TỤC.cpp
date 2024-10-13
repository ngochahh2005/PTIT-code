#include <bits/stdc++.h>
#define ll long long
#define mod 1000000007
using namespace std;

int main(){
	ios_base::sync_with_stdio(0);
	cin.tie(0);
	int t;
	cin >> t;
	while(t--){
		int n;
		cin >> n;
		ll a[n], s = -1e18;
		for(int i = 0; i < n; i++) cin >> a[i];
		for(int i = 0; i < n; i++) {
			ll tmp = 1;
			for(int j = i; j < n; j++) {
				tmp *= a[j];
				if (tmp > s) s = tmp;
			}
		}
		cout << s << "\n";
	}
}
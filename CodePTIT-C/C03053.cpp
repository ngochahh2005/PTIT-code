#include <stdio.h>
int sang[10005];
void solve(int n) {
	int x = n/2;
	for (int i = 2; i <= x; i++) {
		if (sang[i] == 0 && sang[n-i] == 0) printf("%d %d ", i, n-i);
	}
	printf("\n");
}

int main()
{
	sang[0] = 1;
	sang[1] = 1;
	for (int i = 2; i <= 100; i++) {
		if (sang[i] == 1) continue;
		for (int j = 2*i; j <= 10000; j+=i) {
			sang[j] = 1;
		}
	}
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		solve(n);
	}
}

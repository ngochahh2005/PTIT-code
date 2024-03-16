#include <stdio.h>

int min(int x, int y) {
	return (x < y) ? x : y;
}

int a[] = {0, 1, 2, 5, 10, 20, 50, 100, 200, 500, 1000};

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int dp[n+5];
		for (int i = 0; i <= n; i++) dp[i] = -1;
		dp[0] = 0;
		for (int i = 1; i <= n; i++) {
			for (int j = 1; j <= 10; j++) {
				if (i < a[j]) break;
				if (dp[i - a[j]] != -1) {
					if (dp[i] == -1) dp[i] = dp[i-a[j]] + 1;
					else dp[i] = min(dp[i-a[j]] + 1, dp[i]);
				}
			}
		}
//		for (int i = 1; i <= n; i++) printf("%d	%d\n", i, dp[i]);
		printf("%d\n", dp[n]);
	}
}

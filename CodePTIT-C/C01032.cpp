#include <stdio.h>
void solve(int n) {
	int t = 1, i = 2;
	while (n > 1) {
		while (n % i != 0) i++;
		n /= i;
		if (n % i != 0) t *= i;
	}
	printf("%d\n", t);
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		solve(n);
	}
}

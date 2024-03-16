#include <stdio.h>

int solve(int n, int p) {
	int s = 0;
	while (n > 0) {
		s += n / p;
		n /= p;
	}
	return s;
} 

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n, p;
		scanf("%d%d", &n, &p);
		printf("%d\n", solve(n,p));
	}
}

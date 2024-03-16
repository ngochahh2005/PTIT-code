#include <stdio.h>
int kt(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return (s % 10 == 0) ? 1 : 0;
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		if (kt(n) == 1) printf("YES\n");
		else printf("NO\n");
	}
}

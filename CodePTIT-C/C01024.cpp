#include <stdio.h>
int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int n;
		scanf("%d", &n);
		int dau = n % 10, cuoi = n/10;
		while (n > 0) {
			cuoi = n % 10;
			n /= 10;
		}
		if (dau == cuoi) printf("YES\n");
		else printf("NO\n");
	}
}

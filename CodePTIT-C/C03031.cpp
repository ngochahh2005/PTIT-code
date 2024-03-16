#include <stdio.h>
int ucln(int a, int b) {
	if (a < b) {
		int t = a;
		a = b;
		b = t;
	}
	if (b == 0) return a;
	return ucln(b, a%b);
}

int main()
{
	int t;
	scanf("%d", &t);
	while (t--) {
		int a, b, c, d;
		scanf("%d%d%d%d", &a, &b, &c, &d);
		if (ucln(a, b) == ucln(c, d)) printf("YES\n");
		else printf("NO\n");
	}
}

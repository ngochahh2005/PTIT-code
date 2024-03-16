#include <stdio.h>
int ucln (int a, int b) {
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
		int a, b;
		scanf("%d%d", &a, &b);
		printf("%d\n", ucln(a,b));
	}
}

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
	int a, b;
	scanf("%d%d", &a, &b);
	printf("%d\n%lld", ucln(a,b), (long long)a*b/ucln(a,b));
}

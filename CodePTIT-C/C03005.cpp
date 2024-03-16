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
	for (int i = a; i < b; i++) {
		for (int j = i + 1; j <= b; j++) {
			if (ucln(i,j) == 1) printf("(%d,%d)\n", i, j);
		}
	}
}

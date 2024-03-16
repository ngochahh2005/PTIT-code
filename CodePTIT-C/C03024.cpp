#include <stdio.h>

int sumDigit(int n) {
	int s = 0;
	while (n > 0) {
		s += n % 10;
		n /= 10;
	}
	return s;
}

int swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int a, b;
	scanf("%d%d", &a, &b);
	if (sumDigit(a) > sumDigit(b)) swap(&a,&b);
	printf("%d %d", a, b);
}

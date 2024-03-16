#include <stdio.h>
int vMin(int a, int b) {
	return (a < b) ? a : b;
}

int main()
{
	int a, b, c;
	scanf("%d%d%d", &a, &b, &c);
	printf("%d", vMin(a, vMin(b, c)));
}

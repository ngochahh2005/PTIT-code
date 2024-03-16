#include <stdio.h>

int main()
{
	int a;
	scanf("%d", &a);
	int x = a;
	int b[100], d = 0;
	while (a > 0) {
		b[d] = a % 2;
		d++;
		a /= 2;
	} 
//	printf("%d\n", d);
	if (x == 0) printf("0");
	else for (int i = d-1; i >= 0; i--) {
		printf("%d", b[i]);
	}
}

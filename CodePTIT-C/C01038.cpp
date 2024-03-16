#include <stdio.h>

int main()
{
	int n, d = 0;
	scanf("%d", &n);
	int a[20];
	while (n > 0) {
		a[d] = n % 10;
		d++;
		n /= 10;
	}
	int t = a[0];
	a[0] = a[d-1];
	a[d-1] = t;
	for (int i = d-1; i >= 0; i--) {
		if (i == d-1 && a[i] == 0) continue;
		printf("%d", a[i]);
	}  
}

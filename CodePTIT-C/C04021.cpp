#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	int pos;
	scanf("%d", &pos);
	for (int i = n-pos; i < n; i++) {
		printf("%d ", a[i]);
	}
	for (int i = 0; i < n-pos; i++) {
		printf("%d ", a[i]);
	}
}

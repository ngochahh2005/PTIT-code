#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	}
	printf("Buoc 0: %d\n", a[0]);
	for (int i = 1; i < n; i++) {
		int k = a[i];
		int j = i-1;
		while (j >= 0 && a[j] > k) {
			a[j+1] = a[j];
			j--;
		}
		a[j+1] = k;
		printf("Buoc %d: ", i);
		for (int j = 0; j <= i; j++) printf("%d ", a[j]);
		printf("\n");
		
	}
}

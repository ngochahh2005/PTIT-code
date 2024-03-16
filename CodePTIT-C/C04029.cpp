#include <stdio.h>

void swap(int *a, int *b) {
	int t = *a;
	*a = *b;
	*b = t;
}

int main()
{
	int n;
	scanf("%d", &n);
	int a[n];
	for (int i = 0; i < n; i++) {
		scanf("%d", &a[i]);
	} 
	for (int i = 0; i < n - 1; i++) {
		int check = 0;
		for (int j = 0; j < n-i-1; j++) {
			if (a[j] > a[j+1]) {
				check = 1;
				swap(&a[j], &a[j+1]);
			}
		}
		if (check == 0) break;
		printf("Buoc %d: ", i+1);
		for (int j = 0; j < n; j++) printf("%d ", a[j]);
		printf("\n");
	}
}

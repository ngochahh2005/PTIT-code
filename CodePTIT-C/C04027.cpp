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
	for (int i = 0; i < n-1; i++) {
		printf("Buoc %d: ", i+1);
		int min_idx = i;
		for (int j = i+1; j < n; j++) {
			if (a[j] < a[min_idx]) min_idx = j;
		}
		swap(&a[min_idx], &a[i]);
		for (int j = 0; j < n; j++) printf("%d ", a[j]);
		printf("\n");
		
	}
}

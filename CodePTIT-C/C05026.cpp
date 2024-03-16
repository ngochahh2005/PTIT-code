#include <stdio.h>

int isPrime(int n) {
	if (n < 2) return 0;
	for (int i = 2; i * i <= n; i++) {
		if (n % i == 0) return 0;
	}
	return 1;
}

int main()
{
	int n, max = 0, idexRow = 0, count;
	scanf("%d", &n);
	int a[n][n];
	for (int i = 0; i < n; i++) {
		count = 0;
		for (int j = 0; j < n; j++) {
			scanf("%d", &a[i][j]);
			if (isPrime(a[i][j]) == 1) count++;
		}
		if (count > max) {
			max = count;
			idexRow = i;
		}
	}
	printf("%d\n", idexRow+1);
	for (int j = 0; j < n; j++) 
		if (isPrime(a[idexRow][j]) == 1)
			printf("%d ", a[idexRow][j]);
}
